#include<stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int (*arrPtr)[5] = &arr;    // arrPtr[ &arr[0], &arr[1], &arr[2], &arr[3], &arr[4] ]
    
    printf("Array elements using pointer: \n");
    printf("First element: %d\n", (*arrPtr)[0]); // Accessing first element using pointer
    printf("Second element: %d\n", (*arrPtr)[1]); // Accessing second element using pointer
    printf("Third element: %d\n", (*arrPtr)[2]); // Accessing
   
    printf("\n");
    // changing the value of the first element using pointer
    (*arrPtr)[0] = 100;
    
    printf("First elememt of original array after change: %d\n", arr[0]); // Output: 100
    return 0;


}