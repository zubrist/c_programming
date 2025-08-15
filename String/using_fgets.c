#include <stdio.h>
int main() {
    char str4[1000];
    printf("Enter a line: ");
    fgets(str4, sizeof(str4), stdin); // Input: Hello World  Output: Hello World\n
    printf("You entered: %s", str4); // Note: newline is included
    return 0;
}