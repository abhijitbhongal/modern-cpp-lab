# Fixed-Width Types & Signed/Unsigned

## The Fixed-Width Family (`<cstdint>`)

| Signed | Unsigned | Size | Range |
|--------|----------|------|-------|
| `int8_t` | `uint8_t` | 1 byte | ±127 / 0-255 |
| `int16_t` | `uint16_t` | 2 bytes | ±32K / 0-65K |
| `int32_t` | `uint32_t` | 4 bytes | ±2.1B / 0-4.3B |
| `int64_t` | `uint64_t` | 8 bytes | ±9.2 quintillion |

---

## Why Fixed-Width Types Exist

Native C++ types (`int`, `long`, `short`) have implementation-defined sizes that vary across platforms. This breaks:
- Cross-platform binary file formats
- Network protocols
- CAD geometry data interchange [2]

Fixed-width types guarantee exact size on every platform.

---

## When to Use Each

### Default: `int32_t` (signed)
Use for general arithmetic, counters, coordinates, anything that could be negative.

### Use Unsigned For:
- Bit manipulation (MISRA C Rule 12.7 prohibits signed for bitwise ops)
- STL sizes (forced by `std::vector::size()` returning `size_t`)
- Hardware addresses, hashes, IDs
- Binary file format fields

### Use Fixed-Width When:
- Writing code that must work identically on Windows and Linux
- Defining file format structures
- Working with network protocols
- Cross-platform CAD applications [2]

---

## Critical Pitfalls of Unsigned

# Pitfall 1: Underflow Wraps Around
```cpp
uint32_t count = 0;
count = count - 1;  // Result: 4,294,967,295 (NOT -1)

# Pitfall 2: Empty Container Loop Bug
std::vector<int> empty;
for (size_t i = 0; i < empty.size() - 1; i++) {  // INFINITE LOOP
    // empty.size() is 0, so 0-1 wraps to huge number
}

> Need an integer? Ask:

1. Bit manipulation? → unsigned (uint32_t/uint64_t)
2. STL size? → size_t (forced)
3. Could be negative? → signed (int32_t/int64_t)
4. Binary file format? → fixed-width (matches spec)
5. Will be subtracted/decremented? → strongly prefer signed
6. Default → int32_t

> Key Takeaways
Fixed-width types (int32_t, uint64_t) guarantee size across platforms
Default to signed (int32_t) for general code
Use unsigned only for specific reasons (bits, sizes, IDs)
Beware of unsigned wrap-around — especially with .size() - 1
Compiler warnings about signed/unsigned are your friends