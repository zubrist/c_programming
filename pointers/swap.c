#include<stdio.h>

void swap( int *a,int *b){
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
    
}


int main(){

    int a,b ;


    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    //swap 
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}