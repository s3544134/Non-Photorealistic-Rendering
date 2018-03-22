/*
 * Definition file
 * Class:        ImageFitness
 * Date created: 2007-09-17
 * Written by:   Pasquale Barile
 *
 * See header file for details
 */

using namespace std;
#include "ImageFitness.h"

extern ConfigReader* reader;
extern Target* target;
extern Canvas* canvas;
extern Ralph* ralph;

ImageFitness::ImageFitness(GPConfig *conf)
    : Fitness(conf), fitnessTarget(reader->getFitnessTarget()),
      hsvFitnessH(0.0f), hsvFitnessS(0.0f), hsvFitnessV(0.0f),
      lastFitnessMilestone(360.0f), generationCounter(0)
{
    initFitness();
}

/* 
 * Initialise the fitness object
 */
void ImageFitness::initFitness()
{
    fitnessTarget = reader->getFitnessTarget(); 
    hsvFitnessH = 0.0f;
    hsvFitnessS = 0.0f;
    hsvFitnessV = 0.0f;
    lastFitnessMilestone = 360.0f;
    fitnessRenderThreshold = reader->getFitnessRenderThreshold();
    generationCounter = 0;
}

void ImageFitness::threadedEvaluation(GeneticProgram *individual, Canvas *clone, ReturnFunc *rf)
{
    clone->resetCanvas();
    individual->setFitness(worst());
    individual->evaluate(rf, (void*)clone); // This is where everything gets drawn
    individual->setFitness(computeFitness(clone));
}

void ImageFitness::assignFitness(GeneticProgram* pop[], int popSize)
{
    std::vector<Canvas*> canvas_copies;
    std::vector<RGB*> rgbData_array;
    std::vector<HSV*> hsvData_array;
    std::vector<ReturnFunc> rf_copies;
    std::vector<std::thread> pool;

    int csize = canvas->getSize();
    for(int x = 0; x < popSize; x++){
        RGB *rgbData = new RGB[csize];
        HSV *hsvData = new HSV[csize];
        rgbData_array.push_back(rgbData);
        hsvData_array.push_back(hsvData);
    }


    for(int x = 0; x < popSize; x++){
        ReturnFunc rf;
        Canvas *clone = canvas->clone();
        clone->setNewCanvas(rgbData_array.at(x), hsvData_array.at(x));
        canvas_copies.push_back(clone);
        rf_copies.push_back(rf);
    }

    // Compute fitness for each program
    for(int x = 0; x < popSize; x++){
        pool.push_back(std::thread(&ImageFitness::threadedEvaluation,
                this, pop[x], canvas_copies.at(x), &rf_copies.at(x)));
    }

    for(int i = 0; i < popSize; i++)
        pool.at(i).join();

    int bestIndex = 0;
    double bestFitness = pop[0]->getFitness();
    char pngFile[20];

//    cout << bestFitness << " ";
    for (int i = 1; i < popSize; i++)
    {
        double fitness = pop[i]->getFitness();
//        cout << fitness << " ";
        if (fitness < bestFitness)
        {
            bestFitness = fitness;
            bestIndex = i;
        }
    }
//    cout << endl;

    canvas->copyBest(canvas_copies.at(bestIndex));

    if (lastFitnessMilestone - bestFitness >= fitnessRenderThreshold)
    {
        lastFitnessMilestone = bestFitness;
        sprintf(pngFile, "gen.%06d.png", generationCounter);
        outputResults(pop[bestIndex], pngFile, bestFitness);
    }

    for(int x = 0; x < popSize; x++){
        delete [] rgbData_array.at(x);
        delete [] hsvData_array.at(x);
    }

    rgbData_array.clear();
    hsvData_array.clear();
    pool.clear();
    canvas_copies.clear();
    generationCounter++;
}

float ImageFitness::computeFitness(Canvas *c)
{
    c->computeFitness();
    return c->getFitness();
}

bool ImageFitness::solutionFound(GeneticProgram* pop[], int popSize)
{
    for (int i = 0; i < popSize; i++)
    {
        if (pop[i]->getFitness() <= fitnessTarget)
            return true;
    }
    return false;
}

bool ImageFitness::isBetter(GeneticProgram* gp1, GeneticProgram* gp2)
{
    return (gp1->getFitness() < gp2->getFitness());
}

bool ImageFitness::isWorse(GeneticProgram* gp1, GeneticProgram* gp2)
{
    return (gp1->getFitness() > gp2->getFitness());
}

bool ImageFitness::isEqual(GeneticProgram* gp1, GeneticProgram* gp2)
{
    return (gp1->getFitness() == gp2->getFitness());
}

double ImageFitness::best()
{
    return 0.0;
}

double ImageFitness::worst()
{
    return FLT_MAX;
}

void ImageFitness::outputResults(GeneticProgram* program,
                                 char* pngFile, double bestFitness)
{
    extern string outputDir;

    char pngPath[80];

    strcpy(pngPath, outputDir.c_str());
    strcat(pngPath, "png/");
    strcat(pngPath, pngFile);

    canvas->resetCanvas();
    ReturnFunc rf;
    program->evaluate(&rf);

    cout << "Generation: " << generationCounter;

    cout << "\tNodes: " << canvas->getNumDrawNodes();
    char fitnessString[6];
    sprintf(fitnessString, "%1.4f", bestFitness);
    cout << "\tFitness: " << fitnessString << endl;

    canvas->saveImage(pngPath);

    if (reader->getUsingAdaptiveCanvas())
        canvas->updateBestCanvas();
}
