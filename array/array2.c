/*
what is array?
An array is a collection of elements, all of the same type, stored in contiguous memory locations.
It allows you to store multiple values in a single variable, making it easier to manage and manipulate related data.
Arrays can be one-dimensional (like a list) or multi-dimensional (like a matrix).
*/

#include <stdio.h>
int main(){

    //int a = 10;// stroing a single integer value

    int arr[5]= {10,20,30,40,50};// stroring 10 integer values in an array;

    
    printf("first element of the array: %d\n", arr[0]); // Print the first element of the array
    printf("second element of the array: %d\n", arr[1]); // Print the second element of the array
    printf("third element of the array: %d\n", arr[2]); // Print the third element of the array
    printf("fourth element of the array: %d\n", arr[3]); // Print the fourth element of the array
    printf("fifth element of the array: %d\n", arr[4]); // Print the fifth element of the array
    printf("sixth element of the array: %d\n", arr[5]); // Print the sixth element of the array (out of bounds, may cause undefined behavior)


    return 0;
}