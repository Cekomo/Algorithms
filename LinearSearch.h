#ifndef SEARCHINGALGORITHM_LINEARSEARCH_H
#define SEARCHINGALGORITHM_LINEARSEARCH_H

#include <string>
#include <iostream>

class LinearSearch {
public:
    LinearSearch();
    static int GetValueIndex(int value, const int *array, int size);
    ~LinearSearch();
};


#endif //SEARCHINGALGORITHM_LINEARSEARCH_H