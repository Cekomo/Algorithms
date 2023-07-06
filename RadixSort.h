#ifndef ALGORITHMS_RADIXSORT_H
#define ALGORITHMS_RADIXSORT_H

#include <string>
#include <iostream>
#include <cmath>
#include <cstring>

class RadixSort {
private:
    int **radixArray;

public:
    RadixSort();
    ~RadixSort();
    static void SortElementsByAscendingOrder(int array[], int size);
    static int GetStepNumber(const int *array, int size);
    static void DistributeElementsByRadix(int array[], int size, int step);
};


#endif //ALGORITHMS_RADIXSORT_H
