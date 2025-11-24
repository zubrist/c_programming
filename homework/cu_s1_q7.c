/*
Write a C program that accept string and print it in reverse word by word
e.g
input : alex is good boy
output : boy good is alex
*/

#include <stdio.h>
#include <string.h>

// Function to reverse a portion of a string from start index to end index
void reverse(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    int len, i;
    int word_start = 0;

    printf("Enter a string: ");
    // Read line including spaces
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Step 1: Reverse the entire string
    reverse(str, 0, len - 1);

    // Step 2: Reverse each word in the reversed string
    for (i = 0; i <= len; i++) {
        // If we hit a space or the null terminator, we found a word boundary
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, word_start, i - 1);
            word_start = i + 1;
        }
    }

    printf("Output: %s\n", str);

    return 0;
}