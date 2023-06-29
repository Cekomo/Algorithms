#include "QuickSort.h"

QuickSort::QuickSort() = default;

void QuickSort::SortByAscendingOrder(int array[], int startingIndex, int size) {
    if (startingIndex >= size) return;

    int pivotIndex = GetPivotIndex(array, startingIndex, size);
    int i = startingIndex; int j = size - 2;
    int pivot = array[pivotIndex];

    std::swap(array[pivotIndex], array[size - 1]);

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

    std::swap(array[size - 1], array[i]);

    SortByAscendingOrder(array, startingIndex, i); // you can omit pivot by inserting "i - 1"
    SortByAscendingOrder(array, i+1, size);
}

int QuickSort::GetPivotIndex(const int *array, int startingIndex, int size) { // implement startingIndex for here
    int first = array[startingIndex]; int middle = array[(size + startingIndex)/2]; int last = array[size-1];
    if ((middle > first && middle < last) || (middle < first && middle > last))
        return (size + startingIndex)/2;
    else if ((first > middle && first < last) || (first < middle && first > last))
        return startingIndex;
    else
        return size - 1;
}

QuickSort::~QuickSort() = default;
