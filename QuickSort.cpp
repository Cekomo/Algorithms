#include "QuickSort.h"

QuickSort::QuickSort() = default;

void QuickSort::SortByAscendingOrder(int array[], int startingIndex, int size, int terminateCounter) {
    if (size <= 1) return;

    int medianIndex = QuickSort::GetPivotIndex(array + startingIndex, size);
    int pivot = array[startingIndex + medianIndex];
    int i = startingIndex;
    int j = startingIndex + size - 1;

    while (i <= j) {
        while (array[i] < pivot)
            i++;

        while (array[j] > pivot)
            j--;

        if (i <= j) {
            std::swap(array[i], array[j]);
            i++;
            j--;
        }
    }

    std::swap(array[startingIndex + medianIndex], array[i - 1]); // check if j + 1 is valid

    terminateCounter++;

    if (!IsArraySorted(array + startingIndex, i - startingIndex - 1)) {
        SortByAscendingOrder(array, startingIndex, i - 1 + startingIndex, terminateCounter);
    }
    if (!IsArraySorted(array + i, size)) {
        SortByAscendingOrder(array, startingIndex + i, size - i - 1, terminateCounter);
    }
}

int QuickSort::GetPivotIndex(const int *array, int size) {
    int first = array[0]; int middle = array[size/2]; int last= array[size-1];
    if ((first > middle && first < last) || (first < middle && first > last))
        return 0;
    else if ((middle > first && middle < last) || (middle < first && middle > last))
        return size/2;
    else
        return size-1;
}

bool QuickSort::IsArraySorted(const int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i+1])
            return false;
    }
    return true;
}

QuickSort::~QuickSort() = default;
