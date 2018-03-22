/*
 * Class:  ConfigReader
 * Author: Pasquale Barile
 * Modified by: Ashkan Izadi
 *
 * See header file for details.
 */

using namespace std;
#include "ConfigReader.h"

// Constructor
ConfigReader::ConfigReader(): firstLineLength(0), secondLineLength(0),
    shape(0), typeTriangle(2), population(4), generations(100000), elitism(1),
    mutation(5), crossover(4), maxTree(8), minTree(5), satCannyLo(10), 
    satCannyHi(60), valCannyLo(10), valCannyHi(40),
    randomSeed(0), canvasBG(255), canvasBG_Red(255), canvasBG_Green(255),
    canvasBG_Blue(255), tournamentSize(0), fitnessTarget(0.05),
    targetFileName("marsha"), customDecalFileName("confetti"), fuzzyEdges(true)
{
}

// Destructor
ConfigReader::~ConfigReader()
{
}

// Load and read a program config file
void ConfigReader::readFile(const std::string& path)
{
    std::ifstream in((char*)path.c_str());
    if (!in)
    {
        std::string err = "ConfigReader: could not open file [" + std::string(path) + "]";
        throw std::string(err);
    }

    std::string line, key, type, value;

    bool firstCommentReached = false;
    bool secondCommentReached = false;

    while (getline(in,line))
    {
        int intValue;
        double doubleValue;
        std::string stringValue;
        bool boolValue;

        std::istringstream currentLine(line, std::istringstream::in);

        if (! firstCommentReached)
        {
            if (line[0] == '<' && line[1] == '!' && line[2] == '-' && line[3] == '-')
            {
                firstCommentReached = true;
            }

            continue;
        }

        if (! secondCommentReached)
        {
            if (line[0] == '<' && line[1] == '!' && line[2] == '-' && line[3] == '-')
            {
                secondCommentReached = true;
            }

            continue;
        }

        if (line[0] == '#' || line.length() == 0 || (line[0] == '-' && line[1] == '-' && line[2] == '>'))
        {
            continue;
        }

        currentLine >> key >> type;
        try
        {
            if (type == "int")
            {
                currentLine >> intValue;
                if (key == "colourUpdater")
                    colourUpdater = intValue;
                else if (key == "drawMode")
                    drawMode = intValue;
                else if (key == "minTreeSize")
                    minTree = intValue;
                else if (key == "maxTreeSize")
                    maxTree = intValue;
                else if (key == "numGen")
                    generations = intValue;
                else if (key == "popSize")
                    population = intValue;
                else if (key == "initPop")
                    initPop = intValue;
                else if (key == "elitism")
                    elitism = intValue;
                else if (key == "mutation")
                    mutation = intValue;
                else if (key == "crossover")
                    crossover = intValue;
                else if (key == "satCannyLo")
                    satCannyLo = intValue;
                else if (key == "satCannyHi")
                    satCannyHi = intValue;
                else if (key == "valCannyLo")
                    valCannyLo = intValue;
                else if (key == "valCannyHi")
                    valCannyHi = intValue;
                else if (key == "randomSeed")
                    randomSeed = intValue;
                else if (key == "canvasBG_Red")
                    canvasBG_Red = intValue;
                else if (key == "canvasBG_Green")
                    canvasBG_Green = intValue;
                else if (key == "canvasBG_Blue")
                    canvasBG_Blue = intValue;
                else if(key == "typeTriangle")
                    typeTriangle = intValue;
                else if (key == "firstLineLength")
                    firstLineLength = intValue;
                else if (key == "secondLineLength")
                    secondLineLength = intValue;
                else if (key == "lineArtColorMode")
                    lineArtColorMode = intValue;
                else if (key == "lineArtThickness")
                    lineArtThickness = intValue;
                else if (key == "pixelReplacement")
                    shroudPixelStrategy = intValue;
            }
            else if (type == "double")
            {
                currentLine >> doubleValue;
                if (key == "fitnessTarget")
                    fitnessTarget = doubleValue;
                else if (key == "fitnessRenderThreshold")
                    fitnessRenderThreshold = doubleValue;
            }
            else if (type == "string")
            {
                currentLine >> stringValue;
                if (key == "pathToTarget")
                    pathToTarget = stringValue;
                else if (key == "pathToMask")
                    pathToMask = stringValue;
                else if (key == "pathToOutput")
                    pathToOutput = stringValue;
                else if (key == "targetFilename")
                    targetFileName = stringValue;
                else if (key == "customDecal")
                    customDecalFileName = stringValue;
                else if (key == "pathToPalette")
                    pathToPalette = stringValue;
                else if (key == "paletteFile")
                    palette = stringValue;
                else if (key == "version")
                    version = stringValue;
            }
            else if (type == "bool")
            {
                currentLine >> std::boolalpha >> boolValue;
                if (key == "colourMode")
                    colourMode = boolValue;
                else if (key == "fuzzyEdges")
                    fuzzyEdges = boolValue;
                else if (key == "prog2")
                    prog2 = boolValue;
                else if (key == "prog3")
                    prog3 = boolValue;
                else if (key == "prog4")
                    prog4 = boolValue;
                else if (key == "usingAdaptiveCanvas")
                    usingAdaptiveCanvas = boolValue;
                else if (key == "fastShroud")
                    fastShroud = boolValue;
            }
            else
            {
                std::string error = "ConfigReader::readValues() -- [" + type + "] is an unknown type";
                std::cerr << error << std::endl;
                throw std::string("");
            }
        }
        catch (std::exception e)
        {
            throw std::string(e.what());
        }
    }
}

int ConfigReader::getCanvasBG()
{
    return (canvasBG < 0 || canvasBG > 255) ? 255 : canvasBG;
}

int ConfigReader::getCanvasBG_Red()
{
    return (canvasBG_Red < 0 || canvasBG_Red > 255) ? 255 : canvasBG_Red;
}

int ConfigReader::getCanvasBG_Green()
{
    return (canvasBG_Green < 0 || canvasBG_Green > 255) ? 255 : canvasBG_Green;
}

int ConfigReader::getCanvasBG_Blue()
{
    return (canvasBG_Blue < 0 || canvasBG_Blue > 255) ? 255 : canvasBG_Blue;
}

