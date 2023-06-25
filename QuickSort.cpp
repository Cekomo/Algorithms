#include "QuickSort.h"

QuickSort::QuickSort() = default;

void QuickSort::SortByAscendingOrder(int array[], int size) {
    int medianIndex = QuickSort::GetPivotIndex(array, size);
    

    QuickSort::SortByAscendingOrder(array, size);
}

int GetPivotIndex(const int *array, int size) {
    int first = array[0]; int middle = array[size/2]; int last= array[size-1];
    if ((first > middle && first < last) || (first < middle && first > last))
        return first;
    else if ((middle > first && middle < last) || (middle < first && middle > last))
        return middle;
    else
        return last;
}


QuickSort::~QuickSort() = default;
