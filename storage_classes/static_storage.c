
/*
Static storage class in C
static storage class is used to store variables that are declared inside a function or a block.
The static storage class variable is initialized only once and retains its value between function calls.

*/

#include<stdio.h>
void func(){

    static int count = 0; // parmanent storage class variable
    auto int count2 = 0; // temporary storage class variable

    count++;
    count2++;

    printf("count = %d, count2 = %d\n", count, count2);
    }
    // 
int  main(){
    printf("count= %d", count); // count is not accessible here, it will give an error
    func(); // count = 1, count2 = 1
    func(); // count = 2, count2 = 1
    func(); // count = 3, count2 = 1

    

    return 0;
}