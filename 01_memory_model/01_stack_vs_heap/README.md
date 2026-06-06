# Topic 04 — Memory Model: Stack vs Heap

## Topic
Understanding where C++ variables live in memory, and the trade-offs between stack and heap allocation.

## The Two Memory Regions

### Stack
- **Allocation:** Automatic (compiler manages)
- **Deallocation:** Automatic (when scope ends)
- **Speed:** Very fast (just pointer arithmetic)
- **Size limit:** Small (~1-8 MB per thread)
- **Lifetime:** Tied to function/scope
- **Best for:** Small, short-lived data

### Heap
- **Allocation:** Manual (`new`)
- **Deallocation:** Manual (`delete`)
- **Speed:** Slower (system calls involved)
- **Size limit:** Large (gigabytes)
- **Lifetime:** Until you `delete`
- **Best for:** Large, long-lived, or runtime-sized data

---

## Visual Memory Layout
┌──────────────────────────────────────┐ High addresses
│ STACK │
│ - Function call frames │
│ - Local variables │
│ - Auto cleanup on return │
├──────────────────────────────────────┤
│ (free space) │
├──────────────────────────────────────┤
│ HEAP │
│ - new / delete │
│ - Manual lifetime │
│ - Memory leaks possible │
├──────────────────────────────────────┤
│ Static / Global data │
│ Code (compiled program) │
└──────────────────────────────────────┘ Low addresses