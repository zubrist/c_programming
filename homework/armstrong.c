/*
Write a program in C to print all the Armstrong number from 1 to 500. 
An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of 
its own digits each raised to the power of the number of digits. 
For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
another example is 370, because 3^3 + 7^3 + 0^3 = 370.

*/

#include<stdio.h>
#include<math.h>
int main(){
    int n,t=0,c=0,s,r;
    printf("Enter a no.: ");
    scanf("%d",&n); //  n =  153
    t=n;  // t = 153 
    while(n>0){ //  true , true , true , false -> goto line 21
        c++;  // c = 1 , 2 ,3
        n=n/10; // n= 15 , 1 ,0 
    }
    n = t; // n = 153
    s = 0; // Reset sum to 0 before calculation
    t = n; // Reset t to n before calculation
    while(t>0){ // true , true , true , false -> goto line 27
        r=t%10; // r = 3 , 5 , 1
        s=s+r*r*r; // s = 0+ 3^3 = 27 ||  s= 27 + 5^3 = 27 + 125 = 152 || s = 152 + 1^3 = 153
        t=t/10; // t = 15  , t = 1 , t = 0
    }
if(n==s){ // 153 == 153
    printf("%d is Armstrong no.\n",n);
}
    else{
        printf("%d is not an Armstrong no.\n",n);
    }
   return 0;
}