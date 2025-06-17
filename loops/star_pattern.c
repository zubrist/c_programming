#include<stdio.h>
int main(){
    int n = 5 ; // number of stars to print in a row
    //outer loop
    for(int i = 1; i<=3; i++){ //i = 1,2,3,4
        
        //inner loop
        for(int j = 1; j <=n; j++){ // j= 1,2,3,4,5,6
         printf("*"); 
        }
        

        printf("\n"); // go to next line/row

        /*
        // *****
           *****
           *****
        
        */
    }
    
    /*
    *****
    *****
    *****
    */
    
    return 0;
}