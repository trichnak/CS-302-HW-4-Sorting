#include "Sort.h"

Sort::Sort() {
    data = new int[MAX_SIZE];
}

int Sort::readFile(string inputFile) {
    ifstream file;
    int numItems = 0;
    file.open(inputFile);
    
    if(file.is_open()) {
        for(int i = 0; file >> data[i]; i++) {
            numItems++;
        }
    }
    file.close();
    return numItems;
}

void Sort::writeFile(double CPUtime, double numComps, double numSwaps) {
    ofstream dataFile, statFile;
    dataFile.open(outputFile);
    for(int i = 0; i < dataSize; i++) {
        dataFile << data[i]<< endl;
    }
    dataFile.close();

    statFile.open(statsFile, ios_base::app);
    statFile <<  CPUtime << "," << numComps << "," << numSwaps << "," << endl;
    statFile.close();
}

int Sort::getDataSize() {
    return dataSize;
}

void Sort::swap(int* a, int* b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
}