#ifndef QUICK_SORT
#define QUICK_SORT

#include "Sort.h"

class QuickSort : public Sort {
    double numSwaps, numComps;
    void quickSort(int arr[], int low, int high);
    int partition(int arr[], int low, int high);
public:
    void sort(std::string inputFile, std::string outputFile, std::string statsFile);
};
#include "QuickSort.cpp"
#endif