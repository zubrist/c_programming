#include <stdio.h>
#include <string.h>

int main()
{

    char string_1[1000];
    printf("Enter String 1: ");
    gets(string_1); // Input: qwerty Output: qwerty
    //fgets(string_1, sizeof(string_1), stdin); // |q|w|e|r|t|y|\n 


    char string_2[1000];
    printf("Enter String 2: ");
    gets(string_2); // Input: yuiop Output: yuiop
    // fgets(string_2, sizeof(string_2), stdin);

    /*
    strcat(str1,str2) concatenates two strings and returns a pointer to the destination string.
    - It appends the second string to the first string.
    */

    strcat(string_1, string_2);// |q|w|e|r|t|y|\n  y|u|i|o|p|\n
    printf("Concatenated String: %s", string_1);

    return 0;


}

/*
int ln = strlen(str); //6 
    if(ln > 0 && str[ln-1] == '\n'){ // true and   true
         str[ln-1] = '\0'; // H|E|L|L|O|
    }

    implement it before strcat
*/