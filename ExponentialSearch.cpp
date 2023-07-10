#include "ExponentialSearch.h"

ExponentialSearch::ExponentialSearch() = default;

int ExponentialSearch::GetElementIndex(int value, const int *array, int size) {
    if (array[0] == value) return 0;
    int currentJumpStep = 1;

    while (array[currentJumpStep] <= value) {
        if (currentJumpStep * 2 < size) {
            currentJumpStep *= 2;
        }
        else {
            currentJumpStep = size;
            break;
        }
    }

    int left = currentJumpStep / 2;
    int right = currentJumpStep - 1;
    int mid = (left + right) / 2;
    int result = -1;

    while (left <= right) {
        if (array[mid] == value) {
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

ExponentialSearch::~ExponentialSearch() = default;