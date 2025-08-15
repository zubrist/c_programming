#include <stdio.h>
int main() {
    char str2[100];
    printf("Enter a line: ");
    scanf(" %[^\n]", str2); // Input: Hello World  Output: Hello World
    printf("You entered: %s\n", str2);
    return 0;
}
/*

- Reads a line (including spaces) until a newline is encountered.
- The space before `%` is important to skip any leftover whitespace.


*/