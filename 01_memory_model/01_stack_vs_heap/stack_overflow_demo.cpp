#include <iostream>

void recursiveFunction(int depth) {
    int localData[1000];  // 4000 bytes per call
    localData[0] = depth;  // Use it so compiler doesn't optimize away
    
    if (depth % 1000 == 0) {
        std::cout << "Depth: " << depth << "\n";
    }
    
    recursiveFunction(depth + 1);  // Infinite recursion
}

int main() {
    std::cout << "Starting recursion (will crash with stack overflow)...\n";
    recursiveFunction(0);
    return 0;
}