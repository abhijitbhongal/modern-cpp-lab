#include <iostream>
#include <string>

// DANGEROUS: returns ref to local
const std::string& dangerousReturn() {
    std::string local = "local";
    return local;  // ⚠️ local destroyed when function returns
}

// SAFE: returns ref to static (lives until program ends)
const std::string& safeReturn() {
    static std::string persistent = "persistent";
    return persistent;
}

int main() {
    // const std::string& bad = dangerousReturn();
    // std::cout << bad << "\n";  // Undefined behavior

    const std::string& good = safeReturn();
    std::cout << good << "\n";  // Safe
    return 0;
}