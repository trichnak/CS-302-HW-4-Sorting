#include "SelectionSort.h"

void SelectionSort::sort(string inputFile, string outputFile, string statsFile) {
    dataSize = readFile(inputFile);
    this->outputFile = outputFile;
    this->statsFile = statsFile;
    int temp, smallestIndex;
    double numSwaps = 0, numComps = 0;
    clock_t start = clock();

    for(int i = 0; i < dataSize; i++) {
        smallestIndex = i;
        for(int j = i + 1; j < dataSize; j++) {
            if(data[j] < data[smallestIndex]) {
                smallestIndex = j;
            }
            numComps++;
        }
        swap(&data[i], &data[smallestIndex]);
        numSwaps++;
    }

    clock_t end = clock();
    double total =  (double)(end - start);

    writeFile(total, numComps, numSwaps);
}