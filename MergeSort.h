#ifndef ALGORITHMS_MERGESORT_H
#define ALGORITHMS_MERGESORT_H

#include <string>
#include <iostream>

class MergeSort {
public:
    MergeSort();
    ~MergeSort();
    static void SplitAndMerge(int elements[], int size);
};

#endif //ALGORITHMS_MERGESORT_H
