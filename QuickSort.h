#ifndef ALGORITHMS_QUICKSORT_H
#define ALGORITHMS_QUICKSORT_H

#include <string>
#include <iostream>

class QuickSort {
public:
    QuickSort();
    ~QuickSort();
    static void SortByAscendingOrder(int array[], int startingIndex, int size);
    static int GetPivotIndex(const int *array, int startingIndex, int size);
    static bool IsArraySorted(const int *array, int size);
};


#endif //ALGORITHMS_QUICKSORT_H
