#include "HeapSort.h"

HeapSort::HeapSort() = default;

// max-heap implementation


void HeapSort::SortByAscendingOrder(int array[], int size, int index) {
    if (index < 0) return;
    int swapCandidate; int candidateIndex;
    if (array[2*index + 1] > array[2*index + 2]) {
        swapCandidate = array[2*index+1];
        candidateIndex = 2*index + 1;
    }
    else {
        swapCandidate = array[2*index + 2];
        candidateIndex = 2*index + 2;
    }

    if (array[index] < swapCandidate) {
        std::swap(array[candidateIndex], array[index]);
    }

    SortByAscendingOrder(array, size, index - 1);
    if (index > ((size / 2) - 1) / 2 - 1) return;
    SortByAscendingOrder(array, size, candidateIndex);
}

HeapSort::~HeapSort() = default;
