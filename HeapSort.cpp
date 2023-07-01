#include "HeapSort.h"

HeapSort::HeapSort() = default;

// max-heap implementation
void HeapSort::SortByAscendingOrder(int array[], int size) {
    for (int i = (size / 2) - 1; i >= 0; i--) {
        // compare children first
        int swapCandidate;
        int candidateIndex;
        if (array[2*i + 1] > array[2*i + 2]) {
            candidateIndex = 2*i + 1;
            swapCandidate = array[2*i + 1];
        }
        else {
            candidateIndex = 2*i + 2;
            swapCandidate = array[2*i + 2];
        }

        if (array[i] < swapCandidate)
        {
            array[candidateIndex] = array[i];
            array[i] = swapCandidate;
        }

    }
}

HeapSort::~HeapSort() = default;
