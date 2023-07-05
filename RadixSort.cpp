#include "RadixSort.h"

RadixSort::RadixSort() = default;

// IF NEGATIVE NUMBERS ARE INCLUDED, ELEMENTS SHOULD BE CONVERTED TO ABSOLUTE
int RadixSort::GetStepNumber(int array[], int size) {
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

void RadixSort::SortElementsRespectingDigits(int array[], int size) {
    
}

RadixSort::~RadixSort() = default;