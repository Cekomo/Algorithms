#ifndef SEARCHINGALGORITHM_EXPONENTIALSEARCH_H
#define SEARCHINGALGORITHM_EXPONENTIALSEARCH_H

#include <string>
#include <iostream>
#include <cmath>

class ExponentialSearch {
public:
    ExponentialSearch();
    static int GetElementIndex(int value, const int *array, int size);
    ~ExponentialSearch();
};


#endif