# Topic 01: Compilation Phases

C++ compilation has 3 distinct stages:

# 1. Preprocessor (text manipulation)
- Handles `#include`, `#define`, `#ifdef`
- Replaces `#include <iostream>` with literal contents of iostream header
- Replaces macros with their values (text substitution)
- Output: One large translation unit (text)
- See it: `cl /P file.cpp` produces `file.i`

# 2. Compiler (text → machine code)
- Parses code, checks types, optimizes
- Generates machine instructions for your CPU
- Leaves "placeholders" for things defined elsewhere (like `std::cout`)
- Output: `.obj` file (machine code, not runnable)
- See it: `cl /c file.cpp` produces `file.obj`

# 3. Linker (combine pieces)
- Resolves external symbols (connects placeholders to real code)
- Combines multiple `.obj` files into one
- Adds startup code
- Output: `.exe` file (runnable!)

Think of it like cooking a meal:
1. **Preparation** (preprocessor) — gather ingredients, chop vegetables
2. **Cooking** (compiler) — apply heat, transform raw ingredients
3. **Plating** (linker) — combine everything into the final dish

If any phase fails, the whole meal fails. And the error tells you WHICH phase failed — but only if you know to look.

