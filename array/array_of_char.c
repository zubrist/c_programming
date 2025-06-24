#include<stdio.h>

int main(){

   char charArray[5] = {'H', 'e', 'l', 'l', 'o'}; // Declare and initialize an array of characters

   printf("The characters in the array are:\n"); // Prompt for output
    for(int i = 0; i < 5; i++) { // Loop through each character in the array
         printf("%c ", charArray[i]); // Print each character
    }

    return 0;
}