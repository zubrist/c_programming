#include <stdio.h>
#include <string.h>

int  main(){

    char original[1000];
    printf("Enter a line: ");
    fgets(original, sizeof(original), stdin);


    char copy[1000];
    // strcpy is used to copy the string from one variable to another
    // strcpy(destination, source);
    strcpy(copy,original);

    printf("content of original: %s", original);
    printf("content of copy: %s", copy);

}