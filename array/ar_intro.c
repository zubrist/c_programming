/*

data_type variable_name = value;


data_type array_name[size] ={};

int numbers[10]; // Declaration of an array of integers with 10 elements
float salaries[10]; // Declaration of an array of floats with 10 elements
char letters[26]; // Declaration of an array of characters with 26 elements

 === initialization ===
int numbers[10] = {45,55, 60,68, 34, 12, 45, 78,98 ,100}; // Declaration and initialization of an array of integers with 10 elements

*/

#include <stdio.h>
int main(){

    int marks[5] ;
    // Declaration and initialization of an array of integers with 5 elements
    
    marks[0] = 45; // Assigning value to the first element of the array
    marks[1] = 55; // Assigning value to the second element of the array
    marks[2] = 60; // Assigning value to the third element of the array
    marks[3] = 68; // Assigning value to the fourth element of the array
    marks[4] = 34; // Assigning value to the fifth element of the array
    // marks[5] = 100; // This will cause an error as the index is out of bounds ❌

    // printf("subject 1 : %d\n", marks[0]);
    // printf("subject 2 : %d\n", marks[1]);
    // printf("subject 3 : %d\n", marks[2]);
    // printf("subject 4 : %d\n", marks[3]);
    // printf("subject 5 : %d\n", marks[4]);

    for(int i = 0; i < 5; i++){ // Loop through each element of the array
        printf(" subject %d: %d\n", i+1, marks[i]); // Print the marks of each student
    }

    // last element of the array
    // printf("Last element of the array: %d\n", marks[4]); // Print the last element of the array
    return 0;
}