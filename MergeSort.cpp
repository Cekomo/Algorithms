#include "MergeSort.h"

MergeSort::MergeSort() = default;

void MergeSort::SplitAndMerge(int mainArray[], int mainSize) {
//    if (mainSize <= 1) return;

    int firstArraySize = mainSize / 2;
    int secondArraySize = mainSize - firstArraySize;

    // implement variable length array if the size is small,
    // while some IDEs supports VLA, others aren't
    int* firstArray = new int[firstArraySize];
    int* secondArray = new int[secondArraySize];

    for (int i = 0; i < mainSize; i++) {
        if (i < firstArraySize)
            firstArray[i] = mainArray[i];
        else
            secondArray[i - firstArraySize] = mainArray[i];
    }

    if (mainSize > 1) {
        MergeSort::SplitAndMerge(firstArray, firstArraySize);
        MergeSort::SplitAndMerge(secondArray, secondArraySize);
    }

    int j = 0;
    int q = 0;
    for (int i = 0; i < mainSize; i++) {
        if (j < firstArraySize && (q >= secondArraySize || firstArray[j] < secondArray[q])) {
            mainArray[i] = firstArray[j];
            j++;
        }
        else {
            mainArray[i] = secondArray[q];
            q++;
        }
    }

    delete[] firstArray;
    delete[] secondArray;
}

MergeSort::~MergeSort() = default;

