#ifndef SELECTION_SORT
#define SELECTION_SORT

#include "Sort.h"

class SelectionSort : public Sort {
public:
    void sort(string inputFile, string outputFile, string statsFile);
};
#include "SelectionSort.cpp"
#endif