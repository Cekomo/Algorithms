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

//    for (int i = 0; i < index; i++)
//        std::cout << sortingArray[i] << " ";

    for (int i = 0; i < index; i++)
        heapArray[i] = sortingArray[i];
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

    Heapify(heapArray, size - 1, 0);
}

HeapSort::~HeapSort() {
    delete[] sortingArray;
}