#ifndef SORT
#define SORT

#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;

class Sort {
protected:
    static const int MAX_SIZE = 100000;
    int dataSize;
    string outputFile;
    string statsFile;

    int readFile(string inputFile);
    void writeFile(double CPUtime, double numComps, double numSwaps);
    void swap(int* a, int* b);
public:
    int* data;
    Sort();
    int getDataSize();
    virtual void sort(std::string inputFile, std::string outputFile, std::string statsFile) = 0;
};
#include "Sort.cpp"
#endif