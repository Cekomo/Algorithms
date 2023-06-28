#include "QuickSort.h"

QuickSort::QuickSort() = default;

//void QuickSort::SortByAscendingOrder(int array[], int startingIndex, int size, int terminateCounter) {
//    if (size <= 1) return;
//
//    int medianIndex = QuickSort::GetPivotIndex(array + startingIndex, size);
//    int pivot = array[startingIndex + medianIndex];
//    int i = startingIndex;
//    int j = startingIndex + size - 1;
//
//    while (i <= j) {
//        while (array[i] < pivot)
//            i++;
//
//        while (array[j] > pivot)
//            j--;
//
//        if (i <= j) {
//            std::swap(array[i], array[j]);
//            i++;
//            j--;
//        }
//    }
//
//    std::swap(array[startingIndex + medianIndex], array[i - 1]); // check if j + 1 is valid
//
//    terminateCounter++;
//
//    if (!IsArraySorted(array + startingIndex, i - startingIndex - 1) && terminateCounter < size*4) {
//        SortByAscendingOrder(array, startingIndex, i - 1 + startingIndex, terminateCounter);
//    }
//    if (!IsArraySorted(array + i, size) && terminateCounter < size*4) {
//        SortByAscendingOrder(array, startingIndex + i, size - i - 1, terminateCounter);
//    }
//}

void QuickSort::SortByAscendingOrder(int array[], int startingIndex, int size) {
    if (startingIndex < size) {
        int pivotIndex = GetPivotIndex(array, startingIndex, size);
        int pivot = array[pivotIndex];

        // Move the pivot to the end of the array
        std::swap(array[pivotIndex], array[size - 1]);

        int i = startingIndex;
        for (int j = startingIndex; j < size - 1; j++) {
            if (array[j] <= pivot) {  // Include equal elements in the left partition
                std::swap(array[i], array[j]);
                i++;
            }
        }

        // Move the pivot to its final sorted position
        std::swap(array[i], array[size - 1]);

        // Recursively sort the two sub-arrays
        SortByAscendingOrder(array, startingIndex, i);
        SortByAscendingOrder(array, i + 1, size);
    }
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

bool QuickSort::IsArraySorted(const int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i+1])
            return false;
    }
    return true;
}

QuickSort::~QuickSort() = default;
