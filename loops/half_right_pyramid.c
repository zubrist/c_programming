#include<stdio.h>
int main(){

    int row = 5;
    int col = 5;

    for(int i=1; i<=row;i++){ // i = 1 

        for(int j=1; j<=col; j++){ // j = 2
            if(j<=i){
                printf("1"); // print star
            }
            else{
                printf(" "); // print space
            }
            
        }
        printf("\n"); // go to next line/row
    }

    return 0;
}