#include "BinarySearch.h"

BinarySearch::BinarySearch() = default;

int BinarySearch::GetIndexFromBinarySearch(int value, const int *array, int size) {
    int left = 0;
    int right = size - 1;
    int mid = (left + right) / 2;
    int result = -1;

    while (left <= right) {
        if (array[mid] == value) {
            // we do not return directly after finding the element to seek first occurrence..
            //..if there is any copy of the element equal to "value"
            result = mid;
            right = mid - 1;
        }
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;

        mid = (left + right) / 2;
    }

    return result;
}

BinarySearch::~BinarySearch() {

};
