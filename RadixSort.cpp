#include "RadixSort.h"

RadixSort::RadixSort() = default;

void RadixSort::SortElementsByDescendingOrder(int array[], int size) {
    int stepCount = GetStepNumber(array, size);

    int stepIndex = 0;
    while (stepIndex < stepCount) {
        DistributeElementsByRadix(array, size, stepIndex);
        stepIndex++;
    }
}

// IF NEGATIVE NUMBERS ARE INCLUDED, ELEMENTS SHOULD BE CONVERTED TO ABSOLUTE
int RadixSort::GetStepNumber(const int *array, int size) {
    int greatestElement = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > greatestElement)
            greatestElement = array[i];
    }

    int digitCount = 0;
    if (greatestElement == 0)
        digitCount = 1;
    else
        digitCount = static_cast<int>(std::log10(std::abs(static_cast<double>(greatestElement)))) + 1;

    return digitCount;
}

void RadixSort::DistributeElementsByRadix(int array[], int size, int step) {
    const int maxArraySize = size / 2; // change that as size / 2
    int **radixArray = new int*[10];
    for (int i = 0; i < 10; ++i) {
        radixArray[i] = new int[maxArraySize];
    }

    int currentRadixIndex[10];
    memset(currentRadixIndex, 0, sizeof(currentRadixIndex));

    for (int i = size - 1; i >= 0; i--) {
        int modulo = array[i] / pow(10, step);
        modulo = modulo % 10;
        radixArray[modulo][currentRadixIndex[modulo]] = array[i];
        currentRadixIndex[modulo]++;
    }

    int q = size - 1;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < currentRadixIndex[i]; j++) {
            array[q] = radixArray[i][j];
            q--;
        }
    }

//                    **SORT BY ASCENDING ORDER**

//    for (int i = 0; i < size>; i++) {
//        int modulo = array[i] / pow(10, step);
//        modulo = modulo % 10;
//        radixArray[modulo][currentRadixIndex[modulo]] = array[i];
//        currentRadixIndex[modulo]++;
//    }

//    int q = 0;
//    for (int i = 0; i < 10; i++) {
//        for (int j = 0; j < currentRadixIndex[i]; j++) {
//            array[q] = radixArray[i][j];
//            q++;
//        }
//    }
}

RadixSort::~RadixSort() {
    for (int i = 0; i < 10; ++i) {
        delete[] radixArray[i];
    }

    delete[] radixArray;
};