#ifndef ALGORITHMS_BINARYSEARCH_H
#define ALGORITHMS_BINARYSEARCH_H

#include <string>
#include <iostream>
//#include <cmath>

class BinarySearch {
private:
    int *splitArray;

public:
    BinarySearch();
    static int GetIndexFromBinarySearch(int value, const int *array, int size);
    ~BinarySearch();
};


#endif //ALGORITHMS_BINARYSEARCH_H
