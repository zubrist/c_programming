#include <stdio.h>
/*
what will we need ?

a 2D array to store the matrix 
row and col size 


*/


int main(){

    int matrix[10][10], rows, cols, i , j ;

    printf("Dimension of the matrix (not more than 10X10) :\n");
    scanf("%d %d", &rows , &cols);// 3 3

    printf(" Enter the matrix elements: \n");

    for(i= 0 ; i< rows; i++){ // i = 1 , j = 0
        for(j=0 ; j<cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf(" 3-tuple representation of the above matrix:\n");

    for(i= 0 ; i< rows; i++){ // i = 1 , j = 0
        for(j=0 ; j<cols; j++){
                if(matrix[i][j] !=0 ){
                    printf("%d  %d  %d  \n",i, j, matrix[i][j]);
                }
                
        }
    }
    return 0;
}