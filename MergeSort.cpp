#include "MergeSort.h"

MergeSort::MergeSort() = default;

void MergeSort::SortByAscending(int elements[], int size) {
    int firstArraySize = size / 2;
    int secondArraySize = size - firstArraySize;

    int firstArray[firstArraySize];
    int secondArray[secondArraySize];

    for (int i = 0; i < size; i++) {
        if (i < firstArraySize)
            firstArray[i] = elements[i];
        else
            secondArray[i - firstArraySize] = elements[i];
    }
    
    //...
//    MergeSort::SortByAscending(firstArray, firstArraySize);
//    MergeSort::SortByAscending(secondArray, firstArraySize);
}

MergeSort::~MergeSort() = default;
