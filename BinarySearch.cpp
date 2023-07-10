#include "BinarySearch.h"

BinarySearch::BinarySearch() = default;

int BinarySearch::GetIndexFromBinarySearch(int value, const int *array, int size) {
    int left = 0;
    int right = size - 1;
    int mid = (left + right) / 2;

    while (array[mid] != value && (right - left) > 0) {
        if (array[mid] > value) {
            right = mid - 1;
        }
        else if (array[mid] < value) {
            left = mid + 1;
        }

        mid = (left + right) / 2;
    }

    if (array[mid] == value) return mid;
    else return -1;
}

BinarySearch::~BinarySearch() {

};
