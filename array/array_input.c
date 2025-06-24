/* how to take user input for an array */

#include <stdio.h>
int main(){

    int arraySize;
    printf("Enter the size of the array: "); // 10
    scanf("%d", &arraySize); // Taking input for the size of the array

    int arr[arraySize]; // Declare an array of the specified size;

    printf("Enter %d elements for the array:\n", arraySize); // Prompt user to enter elements

    for(int i = 0 ; i < arraySize; i++)
    {
        printf("Element %d: ", i ); // Prompt for each element
        scanf("%d", &arr[i]); // Read each element into the array
    }

    printf(" array elements are:\n");
    for(int i = 0 ; i < arraySize; i++)
    {
        printf("Element %d: %d\n", i, arr[i]); // Print each element of the array
    }



    return 0;
}