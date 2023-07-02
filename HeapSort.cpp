#include "HeapSort.h"

HeapSort::HeapSort() = default;

void HeapSort::SortByAscendingOrder(int heapArray[], int size) {
    int nonLeafIndex = size / 2 - 1;
    while (nonLeafIndex >= 0) {
        Heapify(heapArray, size, nonLeafIndex);
        nonLeafIndex--;
    }
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

}

HeapSort::~HeapSort() = default;
