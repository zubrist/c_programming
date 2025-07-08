#include<stdio.h>
extern int num1;
extern int num2;



int main(){
    int sum = num1 + num2; // using extern variables
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}