/*
 * Class:  ConfigReader
 * Author: Pasquale Barile
 * Modified by : Ashkan Izadi
 *
 * Reads an external configuration file and provides accessors for the
 * properties defined in the config file.
 *
 * Configuration variables are declared and defined with default values. Any
 * values set in the config file therefore override the default valus.
 */

#ifndef CONFIG_READER_H
#define CONFIG_READER_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <utility>
#include <stdexcept>

class ConfigReader
{
private:
    int firstLineLength, secondLineLength, shape, typeTriangle, population,
        initPop, generations, elitism, mutation, crossover, colourUpdater,
        maxTree, minTree, satCannyLo, satCannyHi, valCannyLo,
        valCannyHi, randomSeed, canvasBG, canvasBG_Red, canvasBG_Green,
        canvasBG_Blue, lineArtColorMode, drawMode, shroudPixelStrategy,
        tournamentSize;
    float fitnessTarget, fitnessRenderThreshold;
    std::string pathToTarget, pathToMask, pathToOutput, targetFileName,
        customDecalFileName, pathToPalette, palette, version;
    bool fuzzyEdges, lineArtThickness, prog2, prog3, prog4, usingAdaptiveCanvas,
         fastShroud, colourMode;

public:
    const static int DRAW_MODE_SHROUD = 0;
    const static int DRAW_MODE_DECALS = 1;
    const static int DRAW_MODE_SQUIGGLE = 2;
    const static int DRAW_MODE_TRIANGLES = 3;
	
    ConfigReader();
    ~ConfigReader();

    void readFile(const std::string& path);

    int getPopulation() { return population; }
    int getInitialPopulation() { return initPop; }
    int getGenerations() { return generations; }
    int getElitism() { return elitism; }
    int getMutation() { return mutation; }
    int getCrossover() { return crossover; }
    int getMaxTree() { return maxTree; }
    int getMinTree() { return minTree; }
    bool getFuzzyEdges() { return fuzzyEdges; }
    int getSatCannyLo() { return satCannyLo; }
    int getSatCannyHi() { return satCannyHi; }
    int getValCannyLo() { return valCannyLo; }
    int getValCannyHi() { return valCannyHi; }
    float getFitnessTarget() { return fitnessTarget; }
    int getRandomSeed() { return randomSeed; }
    // To specify the back ground Colour
	int getCanvasBG();
    int getCanvasBG_Red();
	int getCanvasBG_Green();
	int getCanvasBG_Blue();
	int getColourUpdater() { return colourUpdater; }
	bool getColourMode() { return colourMode; }
	//to pass the variable of line length
	int getFirstLineLength() { return firstLineLength; }
	int getSecondLineLength() { return secondLineLength; }
	int getTypeTriangle(){return typeTriangle;}

    std::string getCustomDecalFileName() { return customDecalFileName; }
    std::string getPathToTarget() { return pathToTarget; }
    std::string getPathToMask() { return pathToMask; }
    std::string getPathToOutput() { return pathToOutput; }
    std::string getPathToPalette() { return pathToPalette; }
    std::string getTargetFileName() { return targetFileName; }
    std::string getPalette() { return palette; }
    std::string getVersion() { return version; }
    bool getLineArtThickness() { return lineArtThickness; }
    int getDrawMode() { return drawMode; }
    double getFitnessRenderThreshold() { return fitnessRenderThreshold; }
    bool getProg2() { return prog2; }
    bool getProg3() { return prog3; }
    bool getProg4() { return prog4; }
    bool getUsingAdaptiveCanvas() { return usingAdaptiveCanvas; }
    bool getFastShroud() { return fastShroud; }
    int getLineArtColorMode() { return lineArtColorMode; }
    int getShroudPixelStrategy() { return shroudPixelStrategy; }
    int getTournamentSize() { return tournamentSize; }
};

#endif // CONFIG_READER_H
