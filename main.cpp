#include <iostream>
#include <fstream>
#include <string>
#include "InsertionSort.h"

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
            std::cerr << "Array size exceeds maximum limit" << std::endl;
            break;
        }
    }

    InsertionSort::SortByAscending(elements, size);

    for (int i = 0; i < size; i++)
        std::cout << elements[i] << " ";

    // Close the file
    inputFile.close();

    //    delete[] elements;
    return 0;
}


