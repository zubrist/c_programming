#include <stdio.h>
#include <string.h>

int main()
{

    char string_1[1000];
    printf("Enter String 1: ");
    fgets(string_1, sizeof(string_1), stdin);


    char string_2[1000];
    printf("Enter String 2: ");
    fgets(string_2, sizeof(string_2), stdin);

    /*

    strcmp() compares two strings and returns:
    - 0 if both strings are equal   
    - a negative value if string_1 is less than string_2
    - a positive value if string_1 is greater than string_2


    */

    int result = strcmp(string_1, string_2);
    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }
}