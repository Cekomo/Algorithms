#include "ExponentialSearch.h"

ExponentialSearch::ExponentialSearch() = default;

int ExponentialSearch::GetElementIndex(int value, const int *array, int size) {
    int curveIndex = 0;
    int currentJumpStep = 0;
    int previousJumpStep;

    while (array[currentJumpStep] < value) {
        previousJumpStep = currentJumpStep;
        currentJumpStep = static_cast<int>(std::pow(2, ++curveIndex));
        if (currentJumpStep > size) {
            currentJumpStep = size;
            break;
        }
    }

    int left = previousJumpStep;
    int right = currentJumpStep - 1;
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

ExponentialSearch::~ExponentialSearch() = default;