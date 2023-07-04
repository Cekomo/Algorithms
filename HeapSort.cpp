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

//    for (int i = 0; i < size; i++)
//        std::cout << sortedArray[i] << " ";

    delete[] sortedArray;
}

void HeapSort::Heapify(int array[], int size, int index) {
    if (index < 0 || index > size - 1) return; // omit "|| index > size - 1" if possible

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

    RelocateRootedNode(heapArray, size - 1, 0); // I changed size = size - 1

    SortAsMaxHeap(heapArray, sortedArray, size - 1, index);
}

void HeapSort::RelocateRootedNode(int heapArray[], int size, int swappableIndex) {
    int leftChild = 2 * swappableIndex + 1;
    int rightChild = 2 * swappableIndex + 2;

    if (leftChild < size && heapArray[leftChild] > heapArray[swappableIndex]
    && heapArray[leftChild] >= heapArray[rightChild]) {
        std::swap(heapArray[leftChild], heapArray[swappableIndex]);
        RelocateRootedNode(heapArray, size, leftChild);
    }
    else if (rightChild < size && heapArray[rightChild] > heapArray[swappableIndex]
    && heapArray[rightChild] > heapArray[leftChild]) {
        std::swap(heapArray[rightChild], heapArray[swappableIndex]);
        RelocateRootedNode(heapArray, size, rightChild);
    }
}

HeapSort::~HeapSort() = default;
