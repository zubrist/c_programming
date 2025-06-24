#include<stdio.h>

int main(){

    char myName[5];

    myName[0]='R';
    myName[1]='e';
    myName[2]='j';
    myName[3]='a';
    myName[4]='\0';


    printf("The characters in the array are:\n"); // Prompt for output
    for(int i = 0; myName[i] != '\0'; i++) {
        printf("%c ", myName[i]); // Print each character
    }

    printf("\n My name is %s\n", myName); // Print the entire string
    return 0;

}