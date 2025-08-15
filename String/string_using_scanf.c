
#include <stdio.h>
int main() {
    char str1[100];  // - >  | H| E | L | L| O | W  |   |  |  | =>
    printf("Enter a String: ");
    scanf("%s", str1); // Input: Hello World  Output: Hello
    printf("You entered: %s\n", str1);
    return 0;
}

/*
Scanf with %s:
- Reads a single word (input stops at space, tab, or newline).
- Cannot read multi-word strings.
*/


