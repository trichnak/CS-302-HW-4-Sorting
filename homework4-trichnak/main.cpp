#include <iostream>

#include "Data.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"

using namespace std;

int main() {
    Data data;
    
    BubbleSort bubble1, bubble2, bubble3;
    SelectionSort selection1, selection2, selection3;
    QuickSort quick1, quick2, quick3;

    data.generateData("unsorted1000.txt", 1000);
    data.generateData("unsorted10000.txt", 10000);
    data.generateData("unsorted100000.txt", 100000);

    data.processData("unsorted1000.txt", "sorted1000.txt", "Bubble1000.txt", bubble1, 10);
    data.processData("unsorted10000.txt", "sorted10000.txt", "Bubble10000.txt", bubble2, 10);
    data.processData("unsorted100000.txt", "sorted100000.txt", "Bubble100000.txt", bubble3, 10);
    data.processData("unsorted1000.txt", "sorted1000.txt", "Selection1000.txt", selection1, 10);
    data.processData("unsorted10000.txt", "sorted10000.txt", "Selection10000.txt", selection2, 10);
    data.processData("unsorted100000.txt", "sorted100000.txt", "Selection100000.txt", selection3, 10);
    data.processData("unsorted1000.txt", "sorted1000.txt", "Quick1000.txt", quick1, 10);
    data.processData("unsorted10000.txt", "sorted10000.txt", "Quick10000.txt", quick2, 10);
    data.processData("unsorted100000.txt", "sorted100000.txt", "Quick100000.txt", quick3, 10);
    
    
    return 0;
}