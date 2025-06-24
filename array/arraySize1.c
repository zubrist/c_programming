#include<stdio.h>
int main() {
    int arr[6] = {10, 20, 30, 40, 50,60}; // Declaration and initialization of an array of integers with 5 elements

    int size = sizeof(arr) / sizeof(arr[0]) ;  // 20 / 4
    // sizeof  - to get the size of the array in bytes

    printf("Size of the array in bytes: %zu\n", sizeof(arr)); // Print the size of the array in bytes
    printf("Size of each element in the array in bytes: %zu\n", sizeof(arr[0])); // Print the size of each element in the array in bytes
    printf("Number of elements in the array: %d\n", size); // Print the


    // printig array elements using for loop
    printf("Elements of the array:\n ");
    for(int i = 0; i < 5 ; i++)
    {
        printf("%d element of the array: %d\n", i + 1, arr[i]); // Print each element of the array
    }


    printf("Elements of the array usign size:\n ");
    for(int i = 0; i < size ; i++)
    {
        printf("%d element of the array: %d\n", i + 1, arr[i]); // Print each element of the array
    }
    
   

    return 0;
}