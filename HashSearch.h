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

        // Bucket(); // necessary if custom constructor is needed
    };

    int bucketSize;
    int nodeSize;
    static Bucket *buckets;

    static int ComputeHashCode(std::string key);
    static int GetDigit(int, int);

public:
    HashSearch(int bucketSize);
    ~HashSearch();

    static void Insert(std::string key, int data);
    int GetValue(std::string key);
    void Remove(std::string key);
    bool ContainsKey(std::string key);

    int GetSize();
    bool IsEmpty();
    void Clear();
    void Resize(int newSize);
};

#endif //DATASTRUCTURES_HASHSEARCH_H