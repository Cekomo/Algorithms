#include "QuickSort.h"

QuickSort::QuickSort() = default;

void QuickSort::SortByAscendingOrder(int array[], int startingIndex, int size, int terminateCounter) {
    if (size <= 1) return;

    int medianIndex = QuickSort::GetPivotIndex(array, size);
    int pivot = array[medianIndex];
    int i = startingIndex;
    int j = size - 1;

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

    std::swap(array[medianIndex], array[i - 1]); // check if j + 1 is valid

    terminateCounter++;
    if (!IsArraySorted(array, size) && terminateCounter < 5 * size) {
        QuickSort::SortByAscendingOrder(array, startingIndex, medianIndex, terminateCounter);
        QuickSort::SortByAscendingOrder(array, medianIndex, size - medianIndex - 1, terminateCounter);
    }

}

int QuickSort::GetPivotIndex(const int *array, int size) {
    int first = array[0]; int middle = array[size/2]; int last= array[size-1];
    if ((first > middle && first < last) || (first < middle && first > last))
        return first;
    else if ((middle > first && middle < last) || (middle < first && middle > last))
        return middle;
    else
        return last;
}

bool QuickSort::IsArraySorted(const int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i+1])
            return false;
    }
    return true;
}

QuickSort::~QuickSort() = default;
