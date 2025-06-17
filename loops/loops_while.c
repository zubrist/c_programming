/*
The while loop in C is a control structure used to repeat a block of code as long as 
a given condition is true. 

-  It evaluates the condition before executing the loop body, making it an `entry-controlled loop`.

while(condition = true)
{
//code
}

*/


// #include <stdio.h>

// int main()
// {


//     int i = 1; 
//     int j =0; 
//     while(j <= 9)// false
//     {
//         printf("%d ", i); // i= 1 , 2 , 3 , 4 ,5 
//         j++;
//     }

//     return 0;
// }


// #include <stdio.h>
// int main(){

//     int i = 1;

//     while(i<=10){
//         printf(" C programming is FUN\n");
//         i++;
//     }
//     return 0;
// }

// add first 10 natural numbers


/*
total = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
*/
// #include <stdio.h>
// int main(){
//     int i = 1;
//     int total = 0;

//     while(i<=10){
//         total = total+i ;
//         i++;

//     }
//     printf("total = %d", total);
//     return 0;

// }


// print even numbers from 1 to 20
// #include <stdio.h>
// int main(){
//     int i = 1;
//     while(i<=20){
//         if(i%2==0){
//             printf("%d ", i);
//         }
//         i++;
//     }

//     return 0;
// }


/*
Homework

1. Reverse Count from 10 to 1 (decrementing)
2. Sum of Digits in a Number ( 123 = 1+2+3 = 6)
3. Product of Numbers from 1 to 5 (1*2*3*4*5 = 120)

*/


#include <stdio.h>
int main(){
    int i = 1; 

    while(i <= 10){ // false
        printf("%d ", i); 
        i++;
    }
    //
    // nothing will be printed because the condition is false at the start
    return 0;

}