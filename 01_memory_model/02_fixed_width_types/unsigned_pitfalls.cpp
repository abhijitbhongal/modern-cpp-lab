#include <iostream>
#include <cstdint>
#include <vector>

int main() {
    std::cout << "=== Demo 1: Unsigned underflow ===\n";
    uint32_t count = 0;
    std::cout << "count = " << count << "\n";
    count = count - 1;
    std::cout << "After count - 1: " << count << "\n";
    std::cout << "(Wrapped to UINT32_MAX!)\n\n";

    std::cout << "=== Demo 2: Signed/unsigned comparison ===\n";
    int32_t signedVal = -1;
    uint32_t unsignedVal = 1;
    std::cout << "signedVal = " << signedVal << "\n";
    std::cout << "unsignedVal = " << unsignedVal << "\n";

    if (signedVal < unsignedVal) {
        std::cout << "Result: -1 < 1 (correct math)\n";
    } else {
        std::cout << "Result: -1 is NOT less than 1 (WRONG! Conversion bug)\n";
    }
    std::cout << "\n";

    std::cout << "=== Demo 3: The empty vector trap ===\n";
    std::vector<int> empty;
    std::cout << "empty.size() = " << empty.size() << "\n";
    std::cout << "empty.size() - 1 = " << (empty.size() - 1) << "\n";
    std::cout << "(That huge number would cause infinite loop!)\n\n";

    std::cout << "=== Demo 4: Safe pattern ===\n";
    std::vector<int> data = {1, 2, 3, 4, 5};
    std::cout << "Pairs in {1,2,3,4,5}:\n";
    for (size_t i = 0; i + 1 < data.size(); i++) {
        std::cout << "  (" << data[i] << ", " << data[i + 1] << ")\n";
    }

    std::cout << "\nWith empty vector (no crash):\n";
    for (size_t i = 0; i + 1 < empty.size(); i++) {
        std::cout << "  This won't print\n";
    }
    std::cout << "  Loop safely skipped\n";

    return 0;
}