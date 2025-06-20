/*
jump statement - break
The `break` statement is used to exit from a loop or switch statement prematurely.
*/


#include <stdio.h>
int main(){
    for(int i = 1; i<=10 ; i++  ){
        if(i == 6){ // If i is equal to 6
            break; // Exit the loop
        }
         // Print the current value of i
         // This will print numbers from 1 to 5
         // and then exit the loop when i becomes 6
        printf("%d \n", i); // Print the current value of i
    }


    return 0;
}
