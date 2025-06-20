/*
TO_DO List:

1. physics -> tick 
2. chemistry -> tick 
3. math -> tick 
5. homework -tick

*/
#include <stdio.h>
int main (){
    for (int i =1 ; i <= 10 ; i++){
        if (i == 5) { // If i is equal to 5
            continue; // Skip the rest of the loop for this iteration
        }

        printf("%d ", i); // Print the current value of i
    }

    return 0;
}