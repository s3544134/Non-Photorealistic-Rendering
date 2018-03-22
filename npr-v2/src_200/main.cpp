/*
 * Main entry point
 * Author:  Perry Barile
 * Modified by: Ashkan Izadi
 * 
 * Initialise:
 *    - target image
 *    - canvases
 *    - fitness class
 *
 * Run the run and collate the resultant data
 */

using namespace std;

#include <cstring>

#include <ctime>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <math.h>
#include <fstream>
#include <sstream>
#include <sys/stat.h>

// RMITGP
#include "Population.h"
#include "Fitness.h"
#include "TournamentSelection.h"
#include "GeneticProgram.h"
#include "NodeSet.h"
#include "ProgramGenerator.h"
#include "GPConfig.h"

// This implementation of RMITGP
#include "Prog2.h"
#include "Prog3.h"
#include "Prog4.h"
#include "Draw2.h"
#include "Draw4.h"
#include "Draw6.h"
#include "RandFloat.h"
#include "ReturnRoot.h"     // data TYPENUM 0
#include "ReturnFunc.h"     // data TYPENUM 1
#include "ReturnFloat.h"    // data TYPENUM 2
#include "ImageFitness.h"   // Fitness class
#include "Ralph.h"          // Ralph Bell Curve Fitness Class
#include "Target.h"
#include "Canny.h"
#include "DecalCanvas.h"
#include "BezierPathCanvas.h"
#include "ShroudCanvas.h"
#include "TriangleCanvas.h"
#include "BestCanvas.h"
#include "MaskMaker.h"
#include "ConfigReader.h"
#include "Palette.h"
#include "DrawColorTriangle.h"
#include "DrawGrayTriangle.h"

Target* target;
Canvas* canvas;
ConfigReader* reader;
Palette* palette;
//ShroudCanvas* myreader;

// Global output path
string outputDir;

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        std::cerr << "Error. This program requires exactly 2 arguments." << std::endl;
        return EXIT_FAILURE;
    }

    // Init the config file reader
    clock_t tStart = clock();

    // Parse ARGV
    outputDir = argv[1];
    if(outputDir.back() != '/')
        outputDir.append("/");
    std::string configPath = argv[2];

    // Config file reader
    ConfigReader xmlreader;
    xmlreader.readFile(configPath);
    reader = &xmlreader;

    // Get the global NPR settings
    std::string version             = xmlreader.getVersion();
    unsigned drawMode               = xmlreader.getDrawMode();
    bool prog2                      = xmlreader.getProg2();
    bool prog3                      = xmlreader.getProg3();
    bool prog4                      = xmlreader.getProg4();

    // Get the global GP settings
    unsigned popSize                = xmlreader.getPopulation();
    unsigned initPop                = xmlreader.getInitialPopulation();
    unsigned numGen                 = xmlreader.getGenerations();
    unsigned minTreeSize            = xmlreader.getMinTree();
    unsigned maxTreeSize            = xmlreader.getMaxTree();
    unsigned elitism                = xmlreader.getElitism();
    unsigned mutation               = xmlreader.getMutation();
    unsigned crossover              = xmlreader.getCrossover();
    unsigned randomSeed             = xmlreader.getRandomSeed();

    bool colourMode                 = xmlreader.getColourMode();;
    std::string targetFilename      = xmlreader.getTargetFileName();
    unsigned firstLineLength        = xmlreader.getFirstLineLength();
    std::string customDecal         = xmlreader.getCustomDecalFileName();
    std::string paletteFile         = xmlreader.getPalette();
    std::string pathToTarget        = xmlreader.getPathToTarget();
    std::string pathToMask          = xmlreader.getPathToMask();
    std::string pathToPalette       = xmlreader.getPathToPalette();
    unsigned canvasBG_Red           = xmlreader.getCanvasBG_Red();
    unsigned canvasBG_Green         = xmlreader.getCanvasBG_Green();
    unsigned canvasBG_Blue          = xmlreader.getCanvasBG_Blue();
    unsigned valCannyHi             = xmlreader.getValCannyHi();
    unsigned valCannyLo             = xmlreader.getValCannyLo();
    unsigned satCannyHi             = xmlreader.getSatCannyHi();
    unsigned satCannyLo             = xmlreader.getSatCannyLo();
    bool fuzzyEdges                 = xmlreader.getFuzzyEdges();

  if (strcmp(argv[1], "-v") == 0) {
    cout << "Version: " << version << endl;
    cout << "Last compiled on " << __DATE__ << " at " << __TIME__ << endl;
    return EXIT_SUCCESS;
  }

  cout << endl << "Output path: " << outputDir << endl;

  // File paths
  string inputTarget = pathToTarget;
  if(inputTarget.back() != '/')
      inputTarget.append("/");
  inputTarget.append(targetFilename);
  inputTarget.append(".png");
    
  string inputMask = pathToMask;
  if(inputMask.back() != '/')
      inputMask.append("/");
  inputMask.append(targetFilename);
  inputMask.append(".png");
    
  string outputTarget = outputDir;
  string outputMask = outputDir;

  outputTarget.append("target.png");
  outputMask.append("mask.png");

  // Check to see if the target and mask files exist
  // Attemp to get file stats. If we can, the files exist
  struct stat fileInfo;
  int intStat = stat(inputTarget.c_str(), &fileInfo);
    
  if (intStat != 0) {
    // The file doesn't exist.
    // Exit gracefully.
    cout << "Target image: \"" << inputTarget << "\" does not exist!\n";
    delete reader;
    exit(1);
  }
    
  // Make a mask
  intStat = stat(inputMask.c_str(), &fileInfo);
  if (intStat != 0) {
    MaskMaker *mm = 
      new MaskMaker(inputTarget.c_str(), inputMask.c_str(), 10, 2);
    mm->makeDefaultMask();
    delete mm;
  }
    
  // The target and mask files have been validated/created, so copy them to
  // the output folder
  RGB* tmpImageData;
  unsigned tempW, tempH;
  read_image(inputTarget.c_str(), (color_t**)&tmpImageData, &tempW, &tempH);
  write_image(outputTarget.c_str(), (color_t*)tmpImageData, tempW, tempH);
  read_image(inputMask.c_str(), (color_t**)&tmpImageData, &tempW, &tempH);
  write_image(outputMask.c_str(), (color_t*)tmpImageData, tempW, tempH);
  delete tmpImageData;
    
  // Initialise the target
  Target* target = new Target(inputTarget.c_str(), inputMask.c_str(),
      satCannyLo, satCannyHi, valCannyLo, valCannyHi, fuzzyEdges);

  if (paletteFile == "Target") {
    palette = new Palette(target);
  } else {
    string palettePath = pathToPalette;
    if(palettePath.back() != '/')
        palettePath.append("/");
    string fullPalettePath = (palettePath.append(paletteFile)).append(".hex");
    palette = new Palette(fullPalettePath.c_str());
  }

  int canvasBG = 128;
  // Initialise the best canvas
  BestCanvas* bestCanvasGray = new BestCanvas(target, canvasBG);
	BestCanvas* bestCanvasColour = new BestCanvas(target,
	        canvasBG_Red, canvasBG_Green, canvasBG_Blue);
	
  // Initialise the canvas
  switch (drawMode)
  {
    case ConfigReader::DRAW_MODE_SHROUD:
    	  canvas = new ShroudCanvas
      (target, canvasBG, bestCanvasGray, reader);
      break;

    case ConfigReader::DRAW_MODE_DECALS:
    	  canvas = new DecalCanvas
      (target, canvasBG, bestCanvasGray, reader);
      break;

    case ConfigReader::DRAW_MODE_SQUIGGLE:
    	  canvas = new BezierPathCanvas
      (target, canvasBG, bestCanvasGray, reader);
      break;

    case ConfigReader::DRAW_MODE_TRIANGLES:
      if (colourMode)
      {
          canvas = new TriangleCanvas(target,
                  canvasBG_Red, canvasBG_Green, canvasBG_Blue,
                  bestCanvasColour, reader);
      }
      else
      {
    		  canvas = new TriangleCanvas
          (target, canvasBG, bestCanvasGray, reader);
      }
      break;
  }

  canvas->resetCanvas();
    
  // Do the default initialisation of the configuration
  GPConfig gpConfig;
  gpConfig.defaultInit();

  int tournamentSize = 1;
  if (tournamentSize > 0)
  {
    cout << "Using tournament selection (size of " << tournamentSize
    << ")" << endl;
    delete gpConfig.selectionOperator;
    gpConfig.selectionOperator = new TournamentSelection(tournamentSize);
  }
  else
  {
    cout << "Using roulette wheel selection" << endl;
  }
	
  //LOG FILE=====================================================================

//  string logShroudPath = outputDir;
//  //logShroudPath.append("shroud-log.txt");
//  //cout << "Log Path for Shroud " << logShroudPath << endl;
//	char slPath[80];
//  strcpy(slPath, logShroudPath.c_str());
//	//cout << "path after Strcpy :" << slPath << endl;
//	reader->setShroudLogName(slPath);

  //=====================================================================

	// Initialise population
  string runLogPath = outputDir;
  runLogPath.append("run-log.txt");
  char rlPath[80];
  strcpy(rlPath, runLogPath.c_str());

  if (initPop == 0) { initPop = popSize; }
  Population pop(popSize, initPop, rlPath, &gpConfig);

  // Set reproduction numbers. These numbers must add up to the population
  // size.
  pop.setNumForMutation(mutation);
  pop.setNumForCrossover(crossover);
  pop.setNumForElitism(elitism);
    
  // Set the return type for the programs
  pop.setReturnType(ReturnFunc::TYPENUM);
    
  // Set the minimum and maximum tree depth
  gpConfig.maxDepth = maxTreeSize;
  gpConfig.minDepth = minTreeSize;
  pop.setDepthLimit(gpConfig.maxDepth);
  pop.setMinDepth(gpConfig.minDepth);
    
  pop.setLogFrequency(1000000);
  //    vc seems to be a problem with 0;
  //    pop.setLogFrequency(0);
    
#ifdef UNIX
  pop.compressGenerationFiles(true);
#endif // UNIX
    
  // Add the terminals
  gpConfig.termSet.addNodeToSet(ReturnFloat::TYPENUM, RandFloat::generate);

  // Add the functions
  switch (drawMode) {

    case ConfigReader::DRAW_MODE_SHROUD:
    gpConfig.funcSet.addNodeToSet(ReturnFunc::TYPENUM, Draw4::generate);
    break;

    case ConfigReader::DRAW_MODE_DECALS:
    gpConfig.funcSet.addNodeToSet(ReturnFunc::TYPENUM, Draw2::generate);
    break;

    case ConfigReader::DRAW_MODE_SQUIGGLE:
		gpConfig.funcSet.addNodeToSet(ReturnFunc::TYPENUM, Draw6::generate);
    break;

    case ConfigReader::DRAW_MODE_TRIANGLES:
    if (colourMode) {
		  gpConfig.funcSet.addNodeToSet(ReturnFunc::TYPENUM,
                    DrawColorTriangle::generate);
    } else {
      gpConfig.funcSet.addNodeToSet(ReturnFunc::TYPENUM,
                    DrawGrayTriangle::generate);
    }
    break;
  }
    
  if (prog2)
    gpConfig.funcSet.addNodeToSet(ReturnFunc::TYPENUM, Prog2::generate);

  if (prog3)
    gpConfig.funcSet.addNodeToSet(ReturnFunc::TYPENUM, Prog3::generate);
    
  if (prog4)
    gpConfig.funcSet.addNodeToSet(ReturnFunc::TYPENUM, Prog4::generate);

  // Set the random seed
  gpConfig.randomNumGenerator = new Random(randomSeed);

  // Create the program generator
  gpConfig.programGenerator = new ProgramGenerator(&gpConfig);

  // Set the fitness class to be used
  gpConfig.fitnessObject = new ImageFitness(&gpConfig);

  pop.generateInitialPopulation();
	string cmode="";

	if(colourMode)
	{
		cmode="Colour Full Scale";
	}
	else
	    cmode="Gray Scale";

  cout << "******************  New run  ******************\n";
	cout << "Colour Mode: " << cmode << endl;
	cout << "First Line Length: " << firstLineLength << endl;
	cout << "Target image: " << inputTarget << endl;
  cout << "Random seed: " << randomSeed << endl;


  double bestFitness;
  try
  {
    string str1 = "";
    if (pop.evolve(numGen))
      cout << "\nFound solution\n";
    else
      cout << "\nDid not find solution\n";

    bestFitness = pop.getBest()->getFitness();
      cout << "Best program Fitness " << bestFitness << str1 << endl;

    for(unsigned i = 0; i < popSize; i++)
      cout << pop.getIndividual(i)->getFitness() << " ";
      cout << endl;
  }
  catch(string s)
  {
    cerr << s << endl;
    cerr << "Exiting (an exception has occured)" << endl;
    delete target;
    delete palette;
    exit(1);
  }

  // The following code executes the best program on the training data and
  // outputs the results of the execution to the file results.txt
  cout << endl
    << "***************************************************" << endl
    << "*                                                 *" << endl
    << "*                 End of run                      *" << endl
    << "*                                                 *" << endl
    << "***************************************************" << endl;

  printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
  cout << "Writing results to run-log.txt" << endl;
  dynamic_cast<ImageFitness *>(gpConfig.fitnessObject)->
                                 outputResults(pop.getBest(),
                                              (char *)"best.png",
                                               bestFitness); 


  gpConfig.cleanUpObjects();
   
  // Clean up globals
  delete target;
  delete palette;
  return EXIT_SUCCESS;
}
