#ifndef ALGORITHMS_HEAPSORT_H
#define ALGORITHMS_HEAPSORT_H

#include <string>
#include <iostream>

class HeapSort {
public:
    HeapSort();
    ~HeapSort();
    static void SortByAscendingOrder(int array[], int size);
    static void Heapify(int array[], int size, int index);
    static void SortByTakingRoot(int heapArray[], int sortingArray[], int size, int index);

private:
    int *sortingArray;
};

#endif
