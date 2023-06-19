#ifndef ALGORITHMS_MERGESORT_H
#define ALGORITHMS_MERGESORT_H

#include <string>
#include <iostream>

class MergeSort {
public:
    MergeSort();
    ~MergeSort();
    static void SortByAscending(int elements[], int);
    static void SplitAndMerge(int mainArray[], int otherArray[], int, int);
};

#endif //ALGORITHMS_MERGESORT_H
