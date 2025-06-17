#include<stdio.h>

int main()
{
    
    int a,b ;
    printf("Enter the number  a : ");
    scanf("%d",&a);
    printf("Enter the number  b : ");
    scanf("%d",&b);

    if(a%2==0 && b%2==0){
        printf("Both are even numbers");
    }
    if(a%2!=0 && b%2!=0){
        printf("Both are odd numbers");
    }
    else{
        printf("One is even and other is odd");
    }
    return 0;
}

// c program to check whether you are eligible for 
// voting ?
/*
 int AGE; 
 char Nationality;

 voting eligiblity : >=18 and I
*/