/*
 😆 😊  😂  🤣
     ^
     |   

 pointer addition (ptr + n )


*/

#include <stdio.h>
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    // int *ptr = NULL;
    int *ptr = arr; // Pointer to the first element of the array

    printf("First element: %d\n", *ptr); // Output: 10
    printf("the  value at ptr + 1: %d\n", *(ptr + 1)); // Output: 20 



    return 0;
}

/*
[ | | | | | | | | || | | | | | | | |] char ArrC[2] 
 ArrC[0] = 'A'; ASCII of A = 65 , 65 in binary = 01000001
[ 0| 1| 0| 0| 0| 0| 0| 0|1 || | | | | | | | |] 
 
ArrC[1] = B  . Ascii of B = 66 , 66 in binary = 01000010
[ 0| 1| 0| 0| 0| 0| 0| 1|0 || 0|1 |0 |0 |0 | 0| 1| 0]

char *ArrCPtr = ArrC; // Pointer to the first element of the array
*(ArrCPtr + 1) // Accessing the second element using pointer arithmetic
*/


