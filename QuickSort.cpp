#include "QuickSort.h"

QuickSort::QuickSort() = default;

void QuickSort::SortByAscendingOrder(int array[], int size) {
    if (size <= 1) return;

    int medianIndex = QuickSort::GetPivotIndex(array, size);
    int pivot = array[medianIndex];
    int i = 0;
    int j = size - 1;

   
    if (!IsArraySorted(array, size))
        QuickSort::SortByAscendingOrder(array, size);
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
