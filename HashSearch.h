#ifndef DATASTRUCTURES_HASHSEARCH_H
#define DATASTRUCTURES_HASHSEARCH_H

#include <iostream>
#include <string>
#include <fstream>

class HashSearch {
private:
    struct Node {
        std::string key; // I am not sure if this is correct
        int data;
        Node *next;

        Node(std::string key, int data);
    };

    struct Bucket {
        int hashCode = 0;
        Node *head = nullptr;
    };

    int bucketSize;
    int nodeSize;
    Bucket *buckets;

    int ComputeHashCode(std::string key);
    int GetDigit(int, int);

public:
    explicit HashSearch(int bucketSize);
    ~HashSearch();

    void Insert(std::string key, int data);
    int GetValue(std::string key);
    void Remove(std::string key);
    bool ContainsKey(std::string key);

    int GetSize();
    bool IsEmpty();
    void Clear();
    void Resize(int newSize);
};

#endif //DATASTRUCTURES_HASHSEARCH_H