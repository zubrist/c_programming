/*

s = x^1 / 1! + x^2 / 2! + x^3 / 3! + ... + x^n / n! or upto n terms

10! = 
long ?? = 
size of long  = 8 bytes = 2X int  
4 bytes = 32 bits = -------------------------------- => 11111111111111111111111111111111 = decimal 4294967295
long = 8 bytes = 64 bits = (1)64
long long = 16 bytes = 128 bits = (1)128
x= 3
n= 3
s = 3^1 / 1! + 3^2 / 2! + 3^3 / 3! = 3/1 + 9/2 + 27/6 = 3 + 4.5 + 4.5 = 12
*/

#include <stdio.h>
#include <math.h>

long factorical(int n){ // n =5
    int fact = 1 ;
    for(int i = 1; i <= n; i++){
        fact *= i; // fact = 1 * 2 * 3 * 4 * 5 
    }
    return fact; // 120

}

int main(){
    int x, n ;
    double sum = 0.0;

    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of n : ");  
    scanf("%d", &n);

    for( int i = 1; i <= n; i++){ // 1
        // x^1 / 1! + 
        sum += pow(x,i) / factorical(i); // 5+5 = 10 ...
    }

    printf("The sum of the series is : %lf\n", sum); // 1.718281828459045
    return 0;

}