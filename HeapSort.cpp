#include "HeapSort.h"

HeapSort::HeapSort() = default;

void HeapSort::SortByAscendingOrder(int heapArray[], int size) {
    Heapify(heapArray, size, size/2 - 1);

    int *sortingArray = new int[size];
    SortAsMaxHeap(heapArray, sortingArray, size, 0);
//    delete[] sortingArray;
}

void HeapSort::Heapify(int array[], int size, int index) {
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

    Heapify(array, size, index - 1);
    if (index > ((size / 2) - 1) / 2 - 1) return;
    Heapify(array, size, candidateIndex);

}

void HeapSort::SortAsMaxHeap(int heapArray[], int sortedArray[], int size, int index) {
    if (size < 1) return;

    sortedArray[index] = heapArray[0];
    index++;
    heapArray[0] = heapArray[size - 1];

    int i = 0;
    while (i < size) {
        if (heapArray[2*i+1] > heapArray[2*i+2] && heapArray[2*i+1] > heapArray[i]) {
            std::swap(heapArray[index], heapArray[2*i+1]);
            i = 2 * i + 1;
        }
        else if (heapArray[2*i+2] > heapArray[2*i+1] && heapArray[2*i+2] > heapArray[i]) {
            std::swap(heapArray[index], heapArray[2*i+2]);
            i = 2 * i + 2;
        }
        else
            break;
    }

    SortAsMaxHeap(heapArray, sortedArray, size - 1, index);
}

HeapSort::~HeapSort() = default;
