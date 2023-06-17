#include "InsertionSort.h"

InsertionSort::InsertionSort() = default;

void InsertionSort::SortByAscending(int elements[], int size) {
    for (int i = 1; i < size; i++) {
        int selectedElement = elements[i];
        int j = i - 1;
        int ithValue = elements[i];
        while (j >= 0 && selectedElement < elements[j]) {
            elements[j+1] = elements[j];
            j--;
        }

        elements[j+1] = ithValue;
    }
}

InsertionSort::~InsertionSort() = default;

