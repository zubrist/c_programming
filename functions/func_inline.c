#include<stdio.h>


int square(int a){ 
    return a * a; // return the square of the number
}

int main(){
    int num = 5; // number to be squared
    printf("The square of %d is: %d\n", num, square(num)); //
    return 0; // return 0 to indicate successful execution
}