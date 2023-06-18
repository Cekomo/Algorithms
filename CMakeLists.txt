cmake_minimum_required(VERSION 3.25)
project(Algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(Algorithms InsertionSort.cpp InsertionSort.h NumberGenerator.cpp main.cpp BubbleSort.cpp BubbleSort.h SelectionSort.cpp SelectionSort.h MergeSort.cpp MergeSort.h)
