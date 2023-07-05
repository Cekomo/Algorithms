#ifndef ALGORITHMS_RADIXSORT_H
#define ALGORITHMS_RADIXSORT_H

#include <string>
#include <iostream>
#include <cmath>

class RadixSort {
public:
    RadixSort();
    ~RadixSort();
    static int GetStepNumber(int array[], int size);
    static void SortElementsByAscendingOrder(int array[], int size);
    static void DistributeElementsByRadix(int array[], int size, int step)
};


#endif //ALGORITHMS_RADIXSORT_H
