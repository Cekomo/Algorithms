#include "HashSearch.h"

HashSearch::HashSearch(int bucketSize) {
    buckets = new Bucket[bucketSize];
}

// key is assumed as array of chars, names in real life
int HashSearch::ComputeHashCode(std::string key) {
    int keyLength = key.length();
    if (keyLength < 2) return 0;

    // capital letter presence is NOT handled
    int firstLetterIndex = (int)key[0] - 96;
    int secondLastLetterIndex = (int)key[keyLength-2] - 96;
    int lastLetterIndex = (int)key[keyLength-1] - 96;

    int keyLetterSum = 0;
    for (int i = 0; i < keyLength; i++)
        keyLetterSum += ((int)key[i] - 96);

    int hashCode = firstLetterIndex * 1000000 + keyLetterSum * 10000 + secondLastLetterIndex * 100 + lastLetterIndex;

    int onesDigitOfSum = GetDigit(hashCode, keyLength-5);
    int hashDigitSum = 0;
    for (int i = 0; i < keyLength; i++)
        hashDigitSum += GetDigit(hashCode, i);

    int hashSumLength = 1;
    if (hashDigitSum / 10 >= 1) hashSumLength = 2;
    return (10 * onesDigitOfSum) + GetDigit(hashDigitSum, hashSumLength-1);
}

int GetDigit(int number, int position) {
    int divisor = 1;
    for (int i = 1; i < position; i++)
        divisor *= 10;

    return (number / divisor) % 10;
}

// do not forget that if you LINK, you MUST handle NEXT pointer
void HashSearch::Insert(std::string key, int data) {
    Node *newNode = new Node(key, data);

    int bucketIndex = ComputeHashCode(newNode->key);
    if (buckets[bucketIndex].head == nullptr) {
        buckets[bucketIndex].head = newNode;
    }
    else {
        Node *currentNode = buckets[bucketIndex].head;
        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }

        currentNode->next = newNode;
    }

    std::ofstream file("HashTable.txt", std::ios::app); // Open the file in append mode
    if (file.is_open())
        file << key << " " << data << std::endl;
}

int HashSearch::GetValue(std::string key) {
    int bucketIndex = ComputeHashCode(key);
    Node *currentNode = buckets[bucketIndex].head;
    if (currentNode == nullptr) return 0;

    while (currentNode != nullptr && currentNode->key != key) {
        currentNode = currentNode->next;
    }

    if (currentNode == nullptr) return 0;
    return currentNode->data;
}

void HashSearch::Remove(std::string key) {
    int bucketIndex = ComputeHashCode(key);
    Node *currentNode = buckets[bucketIndex].head;
    if (currentNode == nullptr) return;

    Node *previousNode = nullptr;
    while (currentNode != nullptr && currentNode->key != key) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }

    if (currentNode == nullptr) return;
    if (currentNode == buckets[bucketIndex].head) // previousNode == nullptr is valid
        buckets[bucketIndex].head = currentNode->next;
    else
        previousNode->next = currentNode->next;

    delete currentNode;
    nodeSize = nodeSize - 1;
}

bool HashSearch::ContainsKey(std::string key) {
    int bucketIndex = ComputeHashCode(key);
    Node *currentNode = buckets[bucketIndex].head;
    if (currentNode == nullptr) return false;

    while (currentNode != nullptr && currentNode->key != key) {
        currentNode = currentNode->next;
    }

    return currentNode->key == key;
}

int HashSearch::GetSize() {
    return nodeSize;
}

bool HashSearch::IsEmpty() {
    return nodeSize == 0;
}

void HashSearch::Clear() {
    for (int bucketIndex = 0; bucketIndex < bucketSize; bucketIndex++) {
        Node *currentNode = buckets[bucketIndex].head;

        while (currentNode != nullptr) {
            Node *previousNode = currentNode;
            currentNode = currentNode->next;
            delete previousNode;
        }

        buckets[bucketIndex].head = nullptr;
    }

    nodeSize = 0;
}


void HashSearch::Resize(int newSize) { // method only allows increasing bucket size
    if (newSize < bucketSize) return;

    Bucket *newBuckets = new Bucket[newSize];
    for (int bucketIndex = 0; bucketIndex < bucketSize; bucketIndex++) {
        Node *currentNode = buckets[bucketIndex].head;

        while (currentNode != nullptr) {
            int newBucketIndex = ComputeHashCode(currentNode->key) % newSize;
            Node *newNode = new Node(currentNode->key, currentNode->data);

            // I DID NOT UNDERSTAND HERE AND TAKE FROM GPT-3
            // I understood now, unlike what I tried to do, it assigned newNode to the head..
            //...of the bucket and assign the existing as the next pointer when chaining occurs
            newNode->next = newBuckets[newBucketIndex].head;
            newBuckets[newBucketIndex].head = newNode;
            // ---------------------------------------------

            currentNode = currentNode->next;
        }
    }

    delete[] buckets;
    buckets = newBuckets;
    bucketSize = newSize;
}

HashSearch::~HashSearch() {
    delete buckets; // delete buckets array
}