/*
Reallocation 


syntax :

prt = (cast_type*) realloc(prt, new_size_in_bytes);

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *arr;
    int n = 5; // replace this with user input

    // dynamically allocating memory for an array of integers with malloc
    arr = (int*) malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Assigning values 1 to 5
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    //
    // new size
    int n2 = 10; // replace this with user input

    arr = (int*) realloc(arr, n2 *sizeof(int)); // Reallocating memory to hold 10 integers
    // what is reallocation failes 
    if(arr == NULL){
        printf("Memory reallocation failed\n");
        return 1; // Exit if memory reallocation fails
    }
    // Initializing the new elements
    for (int i = 5; i < n2; i++) {
        arr[i] = i + 1; // Assigning values 6 to 10
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr); // Free the allocated memory
    printf("Memory freed successfully\n");

    return 0;
}