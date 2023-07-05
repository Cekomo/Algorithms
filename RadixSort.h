#ifndef ALGORITHMS_RADIXSORT_H
#define ALGORITHMS_RADIXSORT_H

#include <string>
#include <iostream>
#include <cmath>

class RadixSort {
public:
    RadixSort();
    ~RadixSort();
    int GetStepNumber(int array[], int size);
    void SortElementsRespectingDigits(int array[], int size);
};


#endif //ALGORITHMS_RADIXSORT_H
