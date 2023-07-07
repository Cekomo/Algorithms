#ifndef SEARCHINGALGORITHM_JUMPSEARCH_H
#define SEARCHINGALGORITHM_JUMPSEARCH_H

#include <string>
#include <iostream>
#include <cmath>

class JumpSearch {
public:
    JumpSearch();
    static int GetIndexFromJumpSearch(int value, const int *array, int size);
    ~JumpSearch();
};


#endif //SEARCHINGALGORITHM_JUMPSEARCH_H