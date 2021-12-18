#include "QuickSort.h"

void QuickSort::sort(std::string inputFile, std::string outputFile, std::string statsFile) {
    dataSize = readFile(inputFile);
    this->outputFile = outputFile;
    this->statsFile = statsFile;
    numSwaps = 0, numComps = 0;
    clock_t start = clock();
    
    quickSort(data, 0, dataSize-1);

    clock_t end = clock();
    double total =  (double)(end - start);

    writeFile(total, numComps, numSwaps);
}

void QuickSort::quickSort(int arr[], int low, int high) { 
    if (low < high) { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

int QuickSort::partition (int arr[], int low, int high) { 
    int pivot = arr[high];
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) { 
        if (arr[j] < pivot) { 
            i++;
            swap(&arr[i], &arr[j]);
            numSwaps++; 
        } 
        numComps++;
    } 
    swap(&arr[i + 1], &arr[high]); 
    numSwaps++;
    return (i + 1); 
}

