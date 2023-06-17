#include "BubbleSort.h"

BubbleSort::BubbleSort() = default;

void BubbleSort::SortByAscending(int elements[], int size) {
    for (int i = 0; i < size; i++) {
        int j = 0;
        while (j < size - i - 1) {
            if (elements[j] > elements[j+1]) {
                int valueAtJ = elements[j];
                elements[j] = elements[j+1];
                elements[j+1] = valueAtJ;
            }

            j++;
        }
    }
}

BubbleSort::~BubbleSort() = default;