#include <iostream>

int main()
{
    //stack allocation
    int stackVar = 100;

    //heap allocation
    int* heapVar = new int(200);

    // Print addresses
    std::cout << "Stack variable:\n";
    std::cout << "  Value: " << stackVar << "\n";
    std::cout << "  Address: " << &stackVar << "\n\n";

    std::cout << "Heap variable:\n";
    std::cout << "  Value: " << *heapVar << "\n";
    std::cout << "  Address (pointer): " << &heapVar << "\n";
    std::cout << "  Address (data): " << heapVar << "\n\n";

    // Compare the regions
    std::cout << "Notice: heap address (data) is FAR from stack address\n";
    std::cout << "  Different memory regions!\n";

    // CRITICAL: Free heap memory
    delete heapVar;
    heapVar = nullptr;  // Good practice — prevents accidental use after delete

    return 0;
}