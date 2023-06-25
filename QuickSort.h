#ifndef ALGORITHMS_QUICKSORT_H
#define ALGORITHMS_QUICKSORT_H

#include <string>
#include <iostream>

class QuickSort {
public:
    QuickSort();
    ~QuickSort();
    void SortByAscendingOrder(int array[], int size);
    int GetPivotIndex(const int *array, int size);
};


#endif //ALGORITHMS_QUICKSORT_H
