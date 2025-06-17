#include<stdio.h>

int main()
{
    
    int a = 1 ;
    int b = 3 ;
    b = a++ + a++ + a++ + a++ ;
    // b = 1++ + a++ +  a++ + a++) ; 
    // b = 1  =>  / a= 2
    // b= 1 + 2 => a= 3
    // b= 1 + 2 + 3 => a = 4
    // b= 1 + 2 + 3 +4  => a= 5
    // b= 10
    printf("a = %d\n",a);  //1 , 14
    printf("b = %d\n",b);  //4  , 1 
    return 0;
}
// b = a++ + a++ + ++a + a-- + ++a + --a

/*
1. `a++`: b = 1, a = 2
2. `a++`: b = 1 + 2 = 3, a = 3
3. `++a`: b = 3 + 4 = 7, a = 4
4. `a--`: b = 7 + 4 = 11, a = 3
5. `++a`: b = 11 + 4 = 15, a = 4
6. `--a`: b = 15 + 3 = 18, a = 3

Therefore, the final values would be a = 3 and b = 18.
*/