#ifndef DATA
#define DATA

#include <fstream>
#include <iostream>
#include <random>
#include <string>

using namespace std;

class Data {
    void calcAvg(string statsFile, int numSorts, int offset);
public:
    void generateData(string filename, int dataSize);
    template<class SortAlg>
    void processData(string inputFile, string outputFile, string statsFile, SortAlg sort, int numSorts);
};
#include "Data.cpp"
#endif