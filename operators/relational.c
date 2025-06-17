#include <stdio.h>
#define TRUE "true"
#define FALSE "false"
int main()
{
    int a = 20 , b = 30;
    // true = 1 , false = 0 
    //printf("a= %d\nb= %d\n");

    // ternary operator
    // condition ? true : false
    printf("is a eqiual to b ?: %s\n",a==b? TRUE : FALSE);

   // printf("a equal to b ??  : %d\n", a == b); // 20 == 30 = false = 0

    printf("a not equal to b ??  : %s\n",a!=b ? TRUE : FALSE ); // 20 != 30 = true = 1

    // less than
    printf("a less than b ??  : %s\n", a<b? TRUE : FALSE); // 20 < 30 = true = 
    
    //grater than
    printf("a greater than b ??  : %s\n", a>b? TRUE : FALSE); // 20 > 30 = false = 0

    // less than or equal to
    printf("a less than or equal to b ??  : %s\n", a<=b ? TRUE : FALSE); // 20 <= 30 = true = 1
                                            // a<b or a==b // true or false = true
    //grater than or equal to   
    printf("a greater than or equal to b ??  : %s\n", a>=b? TRUE : FALSE); // 20 >= 30 = false = 0
                                           // a>b or a==b // false or false = false

    return 0;
}
