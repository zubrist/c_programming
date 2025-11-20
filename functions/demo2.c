#include <stdio.h>

// we write the function defination only once
int add(int a , int b){
    return a + b;
}


int main(){

    int num1 = 10, num2 =20 , num3 = 30 , num4= 40; 

    int result1 = add(num1, num2);
    printf("sum of result1: %d\n", result1);

    int result2 = add(num2, num4);
    printf("sum of result2: %d\n", result2);

    int result3 = add(num1, num3);
    printf("sum of result3: %d\n", result3);
    // we may call the function as many times as we want
    return 0;
}