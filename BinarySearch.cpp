#include "BinarySearch.h"

BinarySearch::BinarySearch() = default;

int BinarySearch::GetIndexFromBinarySearch(int value, int array[], int size) {
    if (array[(size - 1) / 2] == value) return (size - 1) / 2;

    int index = -1;
    int *splitArray = nullptr; // new int[size / 2];
    if (array[(size - 1) / 2] > value && size > 1) {
        splitArray = new int[size / 2];
        for (int i = 0; i < size / 2 - 1; i++)
            splitArray[i] = array[i];

        index = GetIndexFromBinarySearch(value, splitArray, size / 2);
    }
    else if (array[(size - 1) / 2] < value && size > 1) {
        splitArray = new int[size - size / 2];
        for (int i = 0; i < size - size / 2; i++)
            splitArray[i] = array[(size / 2) + i];

        index = GetIndexFromBinarySearch(value, splitArray, size - size / 2);
    }

    delete[] splitArray;
    return index;
}

BinarySearch::~BinarySearch() {

};
