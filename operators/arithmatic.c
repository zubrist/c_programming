#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    int sum, sub, mul, div, mod;

    sum = a + b + c + d; // 10 + 20 + 30 + 40 = 100
    sub = a - b - c - d; // 10 - 20 - 30 - 40 = -80
    mul = a * b ; // 10 * 20  = 200
    div = d / b  ;// 40 / 20 = 2
    mod = d % a ; // 40 % 10 = 0

    printf("Sum = %d\n", sum);
    printf("Sub = %d\n", sub);
    printf("Mul = %d\n", mul);
    printf("Div = %d\n", div);
    printf("Mod = %d\n", mod);
}