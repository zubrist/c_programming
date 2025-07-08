#include<stdio.h>

int main(){

register int num = 10;// hinting the compiler to store this variable in a register
register int num2 = 20;
printf("The value of num is: %d\n", num);
printf("The value of nym2 is: %d\n", num2);
int sum = num + num2;
printf("sum = %d",sum);
}


