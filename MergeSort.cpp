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

    if (size != 1) { // insert it to the beginning and check performance difference
        MergeSort::SplitAndMerge(firstArray, secondArray, firstArraySize, secondArraySize);
        MergeSort::SplitAndMerge(secondArray, firstArray, secondArraySize, firstArraySize);
    }

    // implement here to make the array whole again
}

void MergeSort::SplitAndMerge(int mainArray[], int otherArray[], int mainSize, int otherSize) {
    int firstArraySize = mainSize / 2;
    int secondArraySize = mainSize - firstArraySize;

    int firstArray[firstArraySize];
    int secondArray[secondArraySize];

    for (int i = 0; i < mainSize; i++) {
        if (i < firstArraySize)
            firstArray[i] = mainArray[i];
        else
            secondArray[i - firstArraySize] = mainArray[i];
    }

    if (mainSize != 1) { // insert it to the beginning and check performance difference
        MergeSort::SplitAndMerge(firstArray, secondArray, firstArraySize, secondArraySize);
        MergeSort::SplitAndMerge(secondArray, firstArray, secondArraySize, secondArraySize);
    }

    int mergedArraySize = mainSize + otherSize;
    int mergedArray[mergedArraySize];
    int j = 0;
    int q = 0;
    for (int i = 0; i < mergedArraySize; i++) {
       if (j < firstArraySize && (q >= secondArraySize || firstArray[j] < secondArray[q])) {
           mergedArray[i] = firstArray[j];
           j++;
       }
       else {
           mergedArray[i] = secondArray[q];
           q++;
       }
    }
}

MergeSort::~MergeSort() = default;