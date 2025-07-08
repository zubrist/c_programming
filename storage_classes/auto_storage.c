/*
Auto storage class in C
it is a temorary storage class that is used to store
variables that are declared inside a function or a block.
*/

#include <stdio.h>

void func(){
    printf( "a = %d\n", a );// a is not accessible here

}

int main(){

    auto int a = 10; // auto storage class variable
    /*
    for item a 
    scope = function main
    lifetime/extent = until the function main returns
    */
    

    printf( "a = %d\n", a );

    
    return 0;
}