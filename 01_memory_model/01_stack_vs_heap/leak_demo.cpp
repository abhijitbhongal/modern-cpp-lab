#include <iostream>

void leakyFunction() {
    int* leakedMemory = new int(42);
    std::cout << "Allocated memory at: " << leakedMemory << "\n";
    std::cout << "Value: " << *leakedMemory << "\n";
    // OOPS! No delete — this memory is now LEAKED
}  // leakedMemory pointer is destroyed here, but the memory it pointed to is still allocated

int main() {
    std::cout << "=== Calling leakyFunction multiple times ===\n";
    
    for (int i = 0; i < 5; i++) {
        std::cout << "\nIteration " << i << ":\n";
        leakyFunction();
    }
    
    std::cout << "\n=== Done ===\n";
    std::cout << "We just leaked 5 ints (20 bytes) of memory!\n";
    std::cout << "In a long-running program, this would be a serious problem.\n";
    
    return 0;
}