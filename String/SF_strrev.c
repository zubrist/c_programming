
#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void stringrev(char str[]) {
    int i, len = strlen(str);
    char temp;
    for(i = 0; i < len / 2; i++) {  
        temp = str[i];
        str[i] = str[len - 1 - i]; // str[0] = str[4] = o 
        str[len - 1 - i] = temp; //str[4]= h
    }
    /*
    Example:
    Input: "Hello"  
    temp = 'H', 
    str[0] = 'o', str[4] = 'H'
    */
}

// Example usage
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // H|E|L|L|O|\n

    // Remove newline if present
    int ln = strlen(str); //6 
    if(ln > 0 && str[ln-1] == '\n'){ // true and   true
         str[ln-1] = '\0'; // H|E|L|L|O|
    } // \0 is the null terminator

    stringrev(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

