# C Programming Short Answers (2 marks each)

**1. Compiler vs Interpreter**  
A compiler translates the whole source code into machine code (an executable) before running; errors are reported after full analysis. An interpreter translates & executes line by line, stopping at the first error and not producing a separate executable.

**2. Function of `break` in a `switch`**  
`break;` exits the enclosing `switch` immediately, preventing fall‑through to the next case. Without it, execution continues into subsequent case blocks until a break or end is reached.
```c
switch(op){ 
    case '+':
        add();
        break; 
    case '-':
        sub();
        break;
 }
```

**3. Two examples of user‑defined data types**  
`struct` and `union` (also `enum` and `typedef` aliases). Example:
```c
struct Point { int x,y; };
enum Day { MON, TUE, WED };
```

**4. Two examples of loop structures**  
`for`, `while`, and `do...while` are the main loops. Example:
```c
for(int i=0;i<3;i++) printf("%d ", i);
```

**5. Conditional (ternary) operator**  
`?:` chooses between two expressions based on a condition: `condition ? expr1 : expr2`. Example:
```c
int max = (a>b) ? a : b;
```

**6. Why use header files**  
They declare functions, macros, types so the compiler can check usage before linking (e.g., `#include <stdio.h>`). This enables reuse and separates interface (declarations) from implementation.

**7. When to use `continue`**  
Inside a loop, `continue;` skips the remaining statements in the current iteration and jumps to the next iteration check/update. Example filters unwanted values.
```c
for(int i=0;i<10;i++){ if(i%2) continue; printf("%d ", i); }
```

**8. Function prototypes**  
A prototype declares a function's return type, name, and parameter types before its use, enabling type checking. Example: `int sum(int a, int b);`

**9. Structure vs Union**  
A `struct` allocates separate memory for each member (total size ≥ sum of members with padding). A `union` shares the same memory for all members (size = largest member), so only one member's value is valid at a time.
```c
struct S { int i; double d; };  // likely 16 bytes (platform dependent)
union U { int i; double d; };   // size of double (e.g., 8 bytes)
```

**10. File opening modes & syntax**  
Basic text modes: `"r"` read, `"w"` write (truncates/creates), `"a"` append, `"r+"` read/update, `"w+"` write/update (truncate), `"a+"` append/update. Binary variants add `b` (e.g., `"rb"`, `"wb+"`). Syntax:
```c
FILE *fp = fopen("data.txt", "r");
if(!fp){ perror("open"); return 1; }
```
Close with `fclose(fp);`.
