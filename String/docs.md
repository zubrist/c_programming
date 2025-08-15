# Ways to Take a String from User and Store in an Array in C

This document explains the most common ways to take a string as input from the user and store it in a character array in C programming, with examples and comments.

---

## 1. Using `scanf("%s", array)`

- Reads a single word (input stops at space, tab, or newline).
- Cannot read multi-word strings.

```c
#include <stdio.h>
int main() {
    char str1[100];
    printf("Enter a word: ");
    scanf("%s", str1); // Input: Hello World  Output: Hello
    printf("You entered: %s\n", str1);
    return 0;
}
```

---

## 2. Using `scanf(" %[^\n]", array)`

- Reads a line (including spaces) until a newline is encountered.
- The space before `%` is important to skip any leftover whitespace.

```c
#include <stdio.h>
int main() {
    char str2[100];
    printf("Enter a line: ");
    scanf(" %[^\n]", str2); // Input: Hello World  Output: Hello World
    printf("You entered: %s\n", str2);
    return 0;
}
```

---

## 3. Using `gets(array)` **(Not Recommended)**

- Reads a line including spaces until newline.
- **Unsafe:** Can cause buffer overflow. Deprecated in modern C.
- Use only for learning, not in real code.

```c
#include <stdio.h>
int main() {
    char str3[100];
    printf("Enter a line: ");
    gets(str3); // Input: Hello World  Output: Hello World
    printf("You entered: %s\n", str3);
    return 0;
}
```

---

## 4. Using `fgets(array, size, stdin)`

- Safest way to read a string (including spaces).
- Reads up to `size-1` characters or until newline.
- Keeps the newline character if present.

```c
#include <stdio.h>
int main() {
    char str4[100];
    printf("Enter a line: ");
    fgets(str4, sizeof(str4), stdin); // Input: Hello World  Output: Hello World\n
    printf("You entered: %s", str4); // Note: newline is included
    return 0;
}
```

---

## Summary Table

| Method                   | Reads Spaces | Reads Line | Safe?      | Notes                        |
|--------------------------|-------------|------------|------------|------------------------------|
| `scanf("%s", arr)`       | No          | No         | Yes        | Stops at space/tab/newline   |
| `scanf(" %[^\n]", arr)`  | Yes         | Yes        | Yes        | Reads until newline          |
| `gets(arr)`              | Yes         | Yes        | **No**     | Unsafe, deprecated           |
| `fgets(arr, n, stdin)`   | Yes         | Yes        | Yes        | Includes newline if present  |

---

**Recommendation:**  
- Use `fgets()` for safe and flexible string input.
- Use `scanf(" %[^\n]", arr)` for simple line input without newline



```c
/*
String Reverse Function in C

This function reverses a string in place (modifies the original array).
*/

#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverseString(char str[]) {
    int i, len = strlen(str);
    char temp;
    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

// Example usage
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    size_t ln = strlen(str);
    if(ln > 0 && str[ln-1] == '\n') str[ln-1] = '\0';

    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
```