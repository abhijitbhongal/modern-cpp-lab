# 01 — Translation Units, ODR & Include Guards

# Topic
Understanding how the compiler sees code and the rules that prevent multi-definition errors.

# Key Concepts

# Translation Unit
A `.cpp` file PLUS all its `#include`d content (recursively expanded by the preprocessor) is a **translation unit**. The compiler processes one translation unit at a time, completely independently. The `.i` file we generated in Topic 00 was literally the translation unit.

# One Definition Rule (ODR)
> **You can declare something many times, but you can define it only ONCE across the entire program.**

Applies to: functions, variables, classes (with nuances), templates (with nuances).

# Include Guards
Prevent header contents from being pasted multiple times into the same translation unit:

```cpp
#ifndef HEADER_NAME_HPP
#define HEADER_NAME_HPP
// header contents
#endif

#pragma once
Modern alternative — single line, simpler, faster. Supported by all major compilers.

# Deep Dive: The `inline` Keyword

The `inline` keyword has TWO meanings:

# 1. Original (Mostly Obsolete)
A hint to the compiler: "consider replacing function calls with the function body for performance." Modern compilers ignore this hint and decide on their own.

# 2. Modern Meaning (Important)
**ODR exemption.** Tells the linker: "this function may appear in multiple translation units; treat duplicates as one definition."

# When to Use `inline`

| Situation | Use `inline`? |
|-----------|---------------|
| Function defined in header | ✅ YES |
| Member function defined inside class body | ❌ Already implicit |
| `constexpr` function | ❌ Already implicit |
| Template function | ❌ Already implicit |
| Function defined in `.cpp` file | ❌ Not needed |

# Example
```cpp
// utils.hpp
#pragma once

inline int square(int x) {  // OK — inline allows definition in header
    return x * x;
}

// Without inline, this would cause LNK2005 if included in 2+ files

# Bonus Concept: `constexpr`

# What It Is:
A keyword that enables compile-time computation. Tells the compiler: "this can be evaluated before the program runs."

# Two Uses

**Variables:**
```cpp
constexpr double kPi = 3.14159;
constexpr int kMaxSize = 100;

Functions:
constexpr int square(int x) { return x * x; }

Key Properties
constexpr functions are automatically inline (no ODR violation when in headers)
constexpr enforces compile-time computation when called with constant arguments
Same function works at runtime when called with non-constant arguments
More powerful than const — guarantees compile-time value

When to Use:
1. Mathematical constants (kPi, kEpsilon)
2. Pure utility functions (math, geometry)
3. Array sizes
4. Configuration constants
5. Value-type class constructors

# `const` vs `constexpr`

# Quick Rule
- `const` = "won't change" (can be runtime or compile-time)
- `constexpr` = "won't change AND must be compile-time"


Every `constexpr` is `const`. The reverse is NOT true.

# Use `constexpr` for:
- Mathematical constants (`kPi`, `kEpsilon`)
- Pure utility functions
- Array sizes
- Template arguments
- Compile-time guarantees

# Use `const` for:
- Runtime values that won't change after init
- Function parameters
- Member functions that don't mutate state
- Pointers/references to read-only data
