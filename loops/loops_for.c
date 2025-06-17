/*
for(initialization; condition; increment) {
    // code to be executed
}

example:
 for(int i = 1; i <= 10; i++) {
    printf("%d ", i);
*/

/// i want to print 1 to 10 using for loop
// #include <stdio.h>
// int main(){
// int i;
//     for( i = 0 ; i<11; i++ ){
//         printf("%d ", i); // sum= sum + i = sum = 0+0 +1+2 +3
//     }

//     return 0;
// }


// printing the even numbers under 10 .
#include <stdio.h>
int main(){ 

    for(int i=2 ; i<=10 ; i+=2){
        printf("%d ", i); // 2, 4, 6, 8, 10
    }

    return 0;
}

