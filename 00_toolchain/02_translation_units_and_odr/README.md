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
