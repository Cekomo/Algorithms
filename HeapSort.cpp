#include "HeapSort.h"

HeapSort::HeapSort() = default;

void HeapSort::SortByAscendingOrder(int heapArray[], int size) {
    int nonLeafIndex = size / 2 - 1;
    while (nonLeafIndex >= 0) {
        Heapify(heapArray, size, nonLeafIndex);
        nonLeafIndex--;
    }

    int *sortedArray = new int[size];
    SortAsMaxHeap(heapArray, sortedArray, size, 0);

    for (int i = 0; i < size; i++)
        std::cout << sortedArray[i] << " ";

    delete[] sortedArray;
}

void HeapSort::Heapify(int array[], int size, int index) {
    if (index < 0 || index > size - 1) return;

    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < size && array[leftChild] > array[rightChild] && array[leftChild] > array[index]) {
        std::swap(array[leftChild], array[index]);
        Heapify(array, size, leftChild);
    }
    // (rightChild < size && array[rightChild] > array[index]) // compare performance diff
    else if (rightChild < size && array[rightChild] > array[leftChild] && array[rightChild] > array[index]) {
        std::swap(array[rightChild], array[index]);
        Heapify(array, size, rightChild);
    }
}

void HeapSort::SortAsMaxHeap(int heapArray[], int sortedArray[], int size, int index) {
    if (size <= 1) {
        sortedArray[index] = heapArray[0];
        return;
    }

    sortedArray[index] = heapArray[0];
    index++;
    heapArray[0] = heapArray[size - 1];

    int swappableIndex = 0;
    while (2 * swappableIndex + 2 < size) {
        if (heapArray[2*swappableIndex+1] > heapArray[swappableIndex]
        && heapArray[2*swappableIndex+1] > heapArray[2*swappableIndex+2]) {
            std::swap(heapArray[2*swappableIndex+1], heapArray[swappableIndex]);
            swappableIndex = 2 * swappableIndex + 1;
        }
        else if (heapArray[2*swappableIndex+2] > heapArray[swappableIndex]
        && heapArray[2*swappableIndex+2] > heapArray[2*swappableIndex+1]) {
            std::swap(heapArray[2*swappableIndex+2], heapArray[swappableIndex]);
            swappableIndex = 2 * swappableIndex + 2;
        }
        else
            break;
    }

    SortAsMaxHeap(heapArray, sortedArray, size - 1, index);
}

HeapSort::~HeapSort() = default;
