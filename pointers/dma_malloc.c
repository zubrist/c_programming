/*
library: stdlib.h
Syntax:

ptr = (cast_type*) malloc(size_in_bytes);


*/

#include <stdio.h>
#include<stdlib.h>


int main(){

    int *arr;
    int n = 5; // replace this with user input 

    // Allocating memory for an array of integers
    arr = (int*) malloc(n * sizeof(int));//int arr[5] -> in memory == | 1 | 2 | 3 | 4 | 5 | -> |(3X0)00000001| (3X0)00000010| ...
    //malloc(5 * 4)-> 20 bytes -> 20 * 8 = 160 bits
    // when malloc is called, it allocates/reserves a block of memory of the specified size 
    // and returns a pointer to the first byte of that block.
    //if the allocation fails, it returns NULL.
    // Check if memory allocation was successful , memory is not initialized so it contains garbage values

    if (arr == NULL){
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Initializing the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Assigning values 1 to 5
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Freeing the allocated memory
    free(arr); // Free the allocated memory 
    printf("Memory freed successfully\n");

    return 0;
}