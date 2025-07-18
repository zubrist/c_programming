#include<stdio.h>

int  main(){
    int *ptr = NULL; // Initializing pointer to NULL

    if (ptr == NULL) {
        printf("Pointer is NULL.\n");
    } else {
        // This block will not execute since ptr is NULL
        printf("Pointer value: %d\n", *ptr);
    }

}