#include "JumpSearch.h"

JumpSearch::JumpSearch() = default;

// consider it by ascending order
int JumpSearch::GetIndexFromJumpSearch(int value, const int *array, int size) {
    int jumpingIndex = sqrt(size);

    int i = 0;
    while (i < size && array[i] < value)
        i += jumpingIndex;


//    for (int j = 0; j < jumpingIndex && (i - j) >= 0; j++)
    for (int j = jumpingIndex - 1; j >= 0 && (i - j) >= 0; j--)
    {
        if (array[i - j] == value)
            return i - j;
    }

    return -1;
}

JumpSearch::~JumpSearch() = default;