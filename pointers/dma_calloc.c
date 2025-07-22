/*
Contiguous allocation 

Sytntax:
ptr = (cast_type*) calloc(num_elements, size_of_element);
*/


#include <stdio.h>
#include <stdlib.h>

int main(){


    int *arr;
    int n = 5; // replace this with user input


    // Allocating memory for an array of integers using calloc
    arr = (int*) calloc(n, sizeof(int)); // Allocates memory for an array of n integers and initializes them to 0

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    //if IF block is False
    // Initializing the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Assigning values 1 to 5
        printf("arr[%d] = %d\n", i, arr[i]);
    }


    free(arr); // Free the allocated memory
    printf("Memory freed successfully\n");


}