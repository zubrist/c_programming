#include <stdio.h>
int main() {
    char str3[10]; 
    printf("Enter a line: ");
    gets(str3); // Input: Hello World  Output: Hello World
    printf("You entered: %s\n", str3);
    return 0;
}