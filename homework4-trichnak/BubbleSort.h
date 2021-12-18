#ifndef BUBBLE_SORT
#define BUBBLE_SORT

#include "Sort.h"

class BubbleSort : public Sort {
public:
    void sort(string inputFile, string outputFile, string statsFile);
};
#include "BubbleSort.cpp"
#endif