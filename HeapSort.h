#ifndef ALGORITHMS_HEAPSORT_H
#define ALGORITHMS_HEAPSORT_H

#include <string>
#include <iostream>

class HeapSort {
public:
    HeapSort();
    ~HeapSort();
    void Heapify(int array[], int size, int index);
    void SortAsMaxHeap(int heapArray[], int sortedArray[], int size, int index);
};


#endif
