#ifndef ALGORITHMS_INSERTIONSORT_H
#define ALGORITHMS_INSERTIONSORT_H

#include <string>
#include <iostream>


class InsertionSort {
public:
    InsertionSort();
    ~InsertionSort();
    void Print(const std::string&);
    static void SortByAscending(int elements[], int);
};


#endif //ALGORITHMS_INSERTIONSORT_H
