#include <iostream>
#include <cstdint>
#include <climits>

int main() {
    std::cout << "=== Fixed-Width Type Sizes ===\n";
    std::cout << "int8_t:   " << sizeof(int8_t)   << " bytes\n";
    std::cout << "int16_t:  " << sizeof(int16_t)  << " bytes\n";
    std::cout << "int32_t:  " << sizeof(int32_t)  << " bytes\n";
    std::cout << "int64_t:  " << sizeof(int64_t)  << " bytes\n";
    std::cout << "uint8_t:  " << sizeof(uint8_t)  << " bytes\n";
    std::cout << "uint16_t: " << sizeof(uint16_t) << " bytes\n";
    std::cout << "uint32_t: " << sizeof(uint32_t) << " bytes\n";
    std::cout << "uint64_t: " << sizeof(uint64_t) << " bytes\n\n";

    std::cout << "=== Compared to native types ===\n";
    std::cout << "char:      " << sizeof(char)      << " bytes\n";
    std::cout << "short:     " << sizeof(short)     << " bytes\n";
    std::cout << "int:       " << sizeof(int)       << " bytes\n";
    std::cout << "long:      " << sizeof(long)      << " bytes\n";
    std::cout << "long long: " << sizeof(long long) << " bytes\n\n";

    std::cout << "=== Some ranges ===\n";
    std::cout << "int32_t max:  " << INT32_MAX  << "\n";
    std::cout << "int32_t min:  " << INT32_MIN  << "\n";
    std::cout << "uint32_t max: " << UINT32_MAX << "\n";
    std::cout << "int64_t max:  " << INT64_MAX  << "\n";

    return 0;
}