#include <iostream>
#include <string>
#include <vector>

// BAD: copies the entire vector
void printValuesBad(std::vector<int> values) {
    for (int v : values) {
        std::cout << v << " ";
    }
    std::cout << "\n";
}

// GOOD: no copy, can't modify
void printValues(const std::vector<int>& values) {
    for (int v : values) {
        std::cout << v << " ";
    }
    std::cout << "\n";
    // values.push_back(99);  // ❌ ERROR: const blocks modification
}

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};

    printValuesBad(data);   // Copies entire vector
    printValues(data);      // No copy, just a reference
    return 0;
}