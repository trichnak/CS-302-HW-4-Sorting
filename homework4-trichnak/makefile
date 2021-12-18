sort: main.cpp Data.o Sort.o BubbleSort.o SelectionSort.o QuickSort.o
	g++ main.cpp Data.o Sort.o BubbleSort.o SelectionSort.o QuickSort.o -o sort

Data.o: Data.cpp Data.h
	g++ -c Data.cpp

Sort.o: Sort.cpp Sort.h
	g++ -c Sort.cpp

BubbleSort.o: BubbleSort.cpp BubbleSort.h
	g++ -c BubbleSort.cpp

SelectionSort.o: SelectionSort.cpp SelectionSort.h
	g++ -c SelectionSort.cpp

QuickSort.o: QuickSort.cpp QuickSort.h
	g++ -c QuickSort.cpp

clean:
	rm *.o sort