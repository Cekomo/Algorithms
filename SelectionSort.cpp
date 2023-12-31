#include "SelectionSort.h"

SelectionSort::SelectionSort() = default;

void SelectionSort::SortByAscending(int elements[], int size) {
    for (int i = 0; i < size; i++) {
        int j = 0;
        int greatestElement = elements[j];
        int greatestElementIndex = 0;
        while (j < size - i - 1) {
            if (elements[j+1] > greatestElement) {
                greatestElement = elements[j+1];
                greatestElementIndex = j + 1;
            }
            j++;
        }

        elements[greatestElementIndex] = elements[size-i-1];
        elements[size-i-1] = greatestElement;
    }
}

//void SelectionSort::SortByAscending(int elements[], int size) {
//    for (int i = 0; i < size; i++) {
//        int j = i;
//        int smallestElement = elements[i];
//        int smallestElementIndex = i;
//        while (j < size) {
//            if (elements[j] < smallestElement) {
//                smallestElement = elements[j];
//                smallestElementIndex = j;
//            }
//            j++;
//        }
//
//        elements[smallestElementIndex] = elements[i];
//        elements[i] = smallestElement;
//    }
//}


SelectionSort::~SelectionSort() = default;