#include <iostream>

int main() {
    // Show sizes of basic types
    std::cout << "=== Size of basic types ===\n";
    std::cout << "char:   " << sizeof(char) << " bytes\n";
    std::cout << "short:  " << sizeof(short) << " bytes\n";
    std::cout << "int:    " << sizeof(int) << " bytes\n";
    std::cout << "long:   " << sizeof(long) << " bytes\n";
    std::cout << "double: " << sizeof(double) << " bytes\n";
    std::cout << "bool:   " << sizeof(bool) << " bytes\n";
    std::cout << "void*:  " << sizeof(void*) << " bytes\n\n";

    // Calculate array size
    const size_t numElements = 10000000;
    size_t bytes = numElements * sizeof(int);
    double mb_decimal = bytes / 1000000.0;        // Decimal MB
    double mib_binary = bytes / 1048576.0;        // Binary MiB

    std::cout << "=== Array allocation calculation ===\n";
    std::cout << "Elements: " << numElements << "\n";
    std::cout << "Per element: " << sizeof(int) << " bytes\n";
    std::cout << "Total bytes: " << bytes << "\n";
    std::cout << "Total MB (decimal): " << mb_decimal << " MB\n";
    std::cout << "Total MiB (binary): " << mib_binary << " MiB\n\n";

    // Actually allocate it
    int* hugeArray = new int[numElements];
    std::cout << "Successfully allocated " << bytes << " bytes on heap!\n";
    delete[] hugeArray;

    return 0;
}