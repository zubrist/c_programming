// Increment and Decrement Operators

/*
a = 2 ;
increment operator : ++ ex: a++ => 3 || a = a+1 = 3
decrement operator : -- ex: a-- => 1 || a = a-1 = 1
*/

/*
postfix increment : a++ 
prefix increment : ++a
*/

#include <stdio.h>

int main()
{
    int a = 2;
    int b;
    int c;
    b = ++a; //b=3  
    printf("a = %d b = %d\n", a, b);

    c = a++; // c = 2 , a = 3
    printf("a = %d c = %d\n", a, c);
    return 0;
}
