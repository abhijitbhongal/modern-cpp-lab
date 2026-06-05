> Without PIMPL
shape.hpp ──includes──> point.hpp, <vector>, <string>
    │
    ▼
main.cpp ──includes shape.hpp──> sees ALL internal types

> With PIMPL
shape.hpp ──forward declares──> ShapeImpl (incomplete type)
    │
    ▼
main.cpp ──includes shape.hpp──> sees ONLY public interface

(All heavy includes are inside shape.cpp — hidden from users)

> When to Use PIMPL
Use PIMPL When:
-Building a library with stable public API
-Implementation has heavy dependencies (vector, string, custom types)
-Shipping SDK to external users
-Class has many private helper functions/members
-Compile time is becoming a problem in large codebases 

> Don't Use PIMPL When:
Class is small/simple
Performance-critical code (extra indirection has cost)
Internal-only classes that don't ship
Class is used heavily in tight loops