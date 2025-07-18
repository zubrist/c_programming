/*

**ptr 

*/

#include <stdio.h>
int main(){


    int value = 10;
    int *valPtr = &value;
    int **pptr = &valPtr; // Pointer to pointer

        /*
     memory address        0061FF1C               0061FF18      |  
                        +---------------+-----------------------+-----------------+
                        |       26      |      0061FF1C         |   0061FF18      |
                        +---------------+-----------------------+ ----------------+
                        |       value   |         valPtr        |     pptr        |

    
    */

    printf("Value: %d\n", value); // Output: Value: 10
    printf("Value using pointer: %d\n", *valPtr); // Output: Value using pointer: 10
    printf("Value using pointer to pointer: %d\n", **pptr); // Output: Value using pointer to pointer: 10


    **pptr = 20; // Changing the value using pointer to pointer
    printf("Updated Value: %d\n", value); // Output: Updated Value: 20
    printf("Value using pointer: %d\n", *valPtr); // Output: Value using pointer: 20

    return 0;
}


/*

   [1- > info(2) ]           [2-> info(3) ]    [ 3]


*/