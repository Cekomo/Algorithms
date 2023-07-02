#include <iostream>
#include <fstream>
#include <string>
#include <chrono>

#include "InsertionSort.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

int ExtractSizeFromFilename(const std::string& filename) {
    // Find the position of the last underscore character
    size_t lastUnderscorePos = filename.find_last_of('_');
    // Extract the substring after the last underscore
    std::string sizeString = filename.substr(lastUnderscorePos + 1);
    // Convert the extracted string to an integer
    int size = std::stoi(sizeString);
    return size;
}

int main() {
    std::string fileName;
    std::cout << "Enter the file name: ";
    std::cin >> fileName;

    // Open the file
    std::ifstream inputFile(fileName);
    if (!inputFile) {
        std::cerr << "Error opening file: " << fileName << std::endl;
        return 1;
    }

    // Read and display the contents of the file
    std::string line;
    int size = ExtractSizeFromFilename(fileName);
    //    int* elements = new int[size];
    int elements[size];

    int index = 0;
    while (std::getline(inputFile, line)) {
        // Convert the line to an integer and store it in the array
        elements[index++] = std::stoi(line);

        // Check if the array has reached its maximum size
        if (index >= size) {
//            std::cerr << "Array size exceeds maximum limit" << std::endl;
            break;
        }
    }
//
    auto startTime = std::chrono::steady_clock::now();
//    InsertionSort::SortByAscending(elements, size);
//    BubbleSort::SortByAscending(elements, size);
//    SelectionSort::SortByAscending(elements,size);
//    MergeSort::SplitAndMerge(elements, size);
//    QuickSort::SortByAscendingOrder(elements, 0, size);
    HeapSort::SortByAscendingOrder(elements, size);
    auto endTime = std::chrono::steady_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);

    // Print variables
//    for (int i = 0; i < size; i++)
//        std::cout << elements[i] << " ";


    std::cout << std::endl;
    std::cout << "Time taken by algorithm: " << duration.count() << " milliseconds.";

    // Close the file
    inputFile.close();

    std::cout << std::endl;
    std::string bye;
    std::cin >> bye;  // Wait for user to press enter

    //    delete[] elements;
    return 0;
}


