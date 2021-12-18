#include "Data.h"

void Data::generateData(string filename, int dataSize) {
    ofstream file;
    srand(time(0));

    file.open(filename);
    for(int i = 0; i < dataSize; i++) {
        file << rand() % 1000000 + 1 << endl;
    }
    file.close();
}

template<class SortAlg>
void Data::processData(string inputFile, string outputFile, string statsFile, SortAlg sort, int numSorts) {
    ofstream ostats;
    ostats.open(statsFile);
    ostats << "Run Time,Comparisons,Swaps," << endl;
    ostats.close();
    for(int i = 0; i < numSorts; i++) {
        sort.sort(inputFile, outputFile, statsFile);
    }

    calcAvg(statsFile, numSorts, 1);
    
    ostats.open(statsFile, ios_base::app);
    ostats << "Sorted" << endl;
    ostats.close();
    
    for(int i = 0; i < numSorts; i++) {
        sort.sort(outputFile, outputFile, statsFile);
    }
    calcAvg(statsFile, numSorts, 13);
}

void Data::calcAvg(string statsFile, int numSorts, int offset) {
    ifstream istats;
    istats.open(statsFile);
    string line, temp;
    string::size_type a;
    char delimiter = ',';
    double cpuSum = 0, compSum = 0, swapSum = 0;
    for(int i = 0; i < offset; i++) {
        getline(istats, temp);
    }
    while(getline(istats, line)) {
        temp = line.substr(0, line.find(delimiter));
        cpuSum += stod(temp, &a);
        line.erase(0, line.find(delimiter) + 1);
        temp = line.substr(0, line.find(delimiter));
        compSum += stod(temp, &a);
        line.erase(0, line.find(delimiter) + 1);
        temp = line.substr(0, line.find(delimiter));
        swapSum += stod(temp, &a);
        line.erase(0, line.find(delimiter));
    }

    ofstream ostats;
    ostats.open(statsFile, ios_base::app);
    ostats << "Average," << cpuSum/numSorts << "," << compSum/numSorts << "," << swapSum/numSorts << endl;
    ostats.close();
}