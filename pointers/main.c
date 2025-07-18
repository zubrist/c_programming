/*
what is pointer?
Pointers are variables that store the memory address of another variable instead of 
holding the direct value of the variable..


syntax:
data_type *pointer_name;

safe practice:
int *a = NULL; //initialize pointer to NULL

 */

#include <stdio.h>
int main(){

    int age = 26;
    int *agePtr = &age; // Pointer to the variable 'age'
    /*
     memory address        0061FF1C               0061FF18
                        +---------------+-----------------------+
                        |       26      |      0061FF1C         |   
                        +---------------+-----------------------+
                        |       age     |         agePtr        |

    
    */
    printf("Age: %d\n", age);
    //age = 30 ; 
    *agePtr = 30; // Changing the value using the pointer


    printf("Age: %d\n", age); // Output: Age: 26
     printf("Value at Age Pointer: %d\n", *agePtr); // Output: Value at Age Pointer: 26
    printf("Age Pointer: %p\n", agePtr); // Output: Age Pointer: 0061FF1C
   
}