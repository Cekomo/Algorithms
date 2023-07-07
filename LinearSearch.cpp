#include "LinearSearch.h"

LinearSearch::LinearSearch() = default;

int LinearSearch::GetValueIndex(int value, const int *array, int size) {
    // return the first element index that is equal to the passed variable
    for (int i = 0; i < size; i++)
        if (array[i] == value)
            return i;

    return -1;
}

LinearSearch::~LinearSearch() = default;