#include "BubbleSort.h"

void BubbleSort::sort(string inputFile, string outputFile, string statsFile) {
    dataSize = readFile(inputFile);
    this->outputFile = outputFile;
    this->statsFile = statsFile;
    int temp;
    double numSwaps = 0, numComps = 0;
    clock_t start = clock();

    for(int i = 0; i < dataSize - 1; i++) {
        for(int j = 0; j < dataSize - 1; j++) {
            if(data[j] > data[j+1]) {
                swap(&data[j], &data[j+1]);
                numSwaps++;
            }
            numComps++;
        }
    }
    clock_t end = clock();
    double total =  (double)(end - start);

    writeFile(total, numComps, numSwaps);
}