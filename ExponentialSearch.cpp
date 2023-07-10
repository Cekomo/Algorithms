#include "ExponentialSearch.h"

ExponentialSearch::ExponentialSearch() = default;

int ExponentialSearch::GetElementIndex(int value, const int *array, int size) {
    int curveIndex = 0;
    int currentJumpStep = std::pow(2, curveIndex);;
    int previousJumpStep;

    while (array[currentJumpStep] < value) {
        previousJumpStep = currentJumpStep;
        currentJumpStep = std::pow(2, ++curveIndex);
        if (currentJumpStep > size) {
            currentJumpStep = size;
            break;
        }
    }

    
}

ExponentialSearch::~ExponentialSearch() = default;