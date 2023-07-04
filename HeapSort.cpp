#include "HeapSort.h"

HeapSort::HeapSort() = default;

void HeapSort::SortByAscendingOrder(int heapArray[], int size) {
    int nonLeafIndex = size / 2 - 1;
    while (nonLeafIndex >= 0) {
        Heapify(heapArray, size, nonLeafIndex);
        nonLeafIndex--;
    }

    int *sortingArray = new int[size];
    int index = 0;
    while (size >= 1) {
        SortByTakingRoot(heapArray, sortingArray, size, index);
        size--;
        index++;
    }

    for (int i = 0; i < index; i++)
        std::cout << sortingArray[i] << " ";

    delete[] sortingArray;
}

void HeapSort::Heapify(int array[], int size, int index) {
    if (index < 0) return;

    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    int parentNode = array[index];
    if (leftChild < size && array[leftChild] >= array[rightChild] && array[leftChild] > array[index]) {
        array[index] = array[leftChild];
        array[leftChild] = parentNode;
        Heapify(array, size, leftChild);
    }
    else if (rightChild < size && array[rightChild] > array[leftChild] && array[rightChild] > array[index]) {
        array[index] = array[rightChild];
        array[rightChild] = parentNode;
        Heapify(array, size, rightChild);
    }
}

void HeapSort::SortByTakingRoot(int heapArray[], int sortedArray[], int size, int index) {
    sortedArray[index] = heapArray[0];
    if (size == 1) return;

    heapArray[0] = heapArray[size - 1];

    RelocateRootedNode(heapArray, size - 1, 0); // I changed size = size - 1
}

void HeapSort::RelocateRootedNode(int heapArray[], int size, int swappableIndex) {
    int leftChild = 2 * swappableIndex + 1;
    int rightChild = 2 * swappableIndex + 2;

    int parentNode = heapArray[swappableIndex];
    if (leftChild < size && heapArray[leftChild] > heapArray[swappableIndex]
    && heapArray[leftChild] >= heapArray[rightChild]) {
        heapArray[swappableIndex] = heapArray[leftChild];
        heapArray[leftChild] = parentNode;
        RelocateRootedNode(heapArray, size, leftChild);
    }
    else if (rightChild < size && heapArray[rightChild] > heapArray[swappableIndex]
    && heapArray[rightChild] > heapArray[leftChild]) {
        heapArray[swappableIndex] = heapArray[rightChild];
        heapArray[rightChild] = parentNode;
        RelocateRootedNode(heapArray, size, rightChild);
    }
}

HeapSort::~HeapSort() = default;
