#include "RadixSort.h"

RadixSort::RadixSort() = default;

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
    // I don't get above line ^

    return digitCount;
}

void RadixSort::SortElementsByAscendingOrder(int array[], int size) {
    int stepCount = GetStepNumber(array, size);

    int stepIndex = 0;
    while (stepIndex < stepCount) {
        DistributeElementsByRadix(array, size, stepIndex);
        stepIndex++;
    }
}

void RadixSort::DistributeElementsByRadix(int array[], int size, int step) {
    const int maxArraySize = size / 2; // change that as size / 2
    int radixArray[10][maxArraySize]; // static array assignment can cause limitation problem on sizing
    int currentRadixIndex[10];
    memset(currentRadixIndex, 0, sizeof(currentRadixIndex));

    for (int i = 0; i < size; i++) {
        int modulo = array[i] / pow(10, step);
        modulo = modulo % 10;
        radixArray[modulo][currentRadixIndex[modulo]] = array[i];
        currentRadixIndex[modulo]++;
    }

    int q = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < currentRadixIndex[i]; j++) {
            array[q] = radixArray[i][j];
            q++;
        }
    }
}

RadixSort::~RadixSort() = default;