#include<stdio.h>

int main(){

    char myName[] = "Reja";



    printf("The characters in the array are:\n"); // Prompt for output
    for(int i = 0; myName[i] != '\0'; i++) {
        printf("%c", myName[i]); // Print each character
    }


    printf("\n"); // Print a newline for better formatting

    printf("my name is %s\n", myName); // Print the entire string
    return 0;

}