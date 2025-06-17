/*

if(con1){ // both pos
  // add
}
else if() {
// 1st pos , 2nd neg
    mul()
}
else if() {
// 1st neg , 2nd pos
    div()
    }

else{
 // subs
}
*/

#include <stdio.h>

// int main()
// {
//     int num1 , num2;
//     num1= 20;
//     num2= 10;

//     if( num1 == num2){
//         printf("both are equal\n");
//     }
//     else if(num1 > num2){
//         printf("num1 is greater than num2\n");
        
//     }
    
//     else{
//         printf("num2 is greater than num1\n")

//     }

//     return 0;
// }

// Task : take 3 number and print the greatest number

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("\n the gratest number is:%d", a);
    }
    else if(b>a && b>c){
        printf("\n the gratest number is:%d", b);
    }
    else{
        printf("\n the gratest number is:%d", c);
    }
    return 0;
}