/*
 Write a program in C to read two array and perform addition. 

 12 |  13 | 14 | 15 -> first[]

 22 | 23  | 24 | 25 -> second[]

--------------------------------

addition[i] = first[i] + seccond [i] 

34 | 36 | 38 | 40 -> addition[]

*/

#include <stdio.h>

int main() {
    int size, i;

    // Asking user for array size
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int first[size], second[size], addition[size];

    // Reading elements for the first array
    printf("Enter %d elements for the first array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &first[i]);
    }

    // Reading elements for the second array
    printf("Enter %d elements for the second array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &second[i]);
    }

    // Performing addition
    for (i = 0; i < size; i++) {
        addition[i] = first[i] + second[i];
    }

    // Printing the result
    printf("Resultant Addition Array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", addition[i]);
    }

    return 0;
}
