//#include <iostream>
//#include <fstream>
//#include <random>
//
//int main() {
//    std::random_device rd;
//    std::mt19937 gen(rd());
//
//    int x, y, z;
//
//    // Get input from the user
//    std::cout << "Enter the number of random values to generate: ";
//    std::cin >> x;
//    std::cout << "Enter the lower bound: ";
//    std::cin >> y;
//    std::cout << "Enter the upper bound: ";
//    std::cin >> z;
//
//    // Create a distribution based on the user-specified range
//    std::uniform_int_distribution<> dis(y, z);
//
//    // Create an array to store the random numbers
//    int numbers[x];
//
//    // Generate and store random numbers
//    for (int i = 0; i < x; i++) {
//        numbers[i] = dis(gen);
//    }
//
//    // Display the generated numbers
//    std::cout << "Generated random numbers: ";
//    for (int i = 0; i < x; i++) {
//        std::cout << numbers[i] << " ";
//    }
//    std::cout << std::endl;
//
//    // Create and open the output file
//    std::ofstream outputFile;
//    std::string fileName = std::to_string(y) + "_" + std::to_string(z) + "_" + std::to_string(x) + ".txt";
//    outputFile.open(fileName);
//
//    // Write the numbers to the file
//    for (int i = 0; i < x; i++) {
//        outputFile << numbers[i] << std::endl;
//    }
//
//    // Close the output file
//    outputFile.close();
//
//    std::cout << "Numbers saved in file: " << fileName << std::endl;
//
//    return 0;
//}
