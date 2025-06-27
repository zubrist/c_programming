

#include <stdio.h>
int main(){

    /*
    declaration: mulD_array
    */
    int arr2[2][3];

    arr2[2][3] = {
            {1, 2, 3},
            {4, 5, 6} 
            } 
    
            
    // take row and column size from user
    int row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);  

    int arr3[row][col]; 2,3

    /* inserting elements in arr3 by taking values from user in for loop*/
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter element for arr3[%d][%d]: ", i, j); //  10  ,20  
            scanf("%d", &arr3[i][j]); // [0,0] -> 10 ||[0,1]->20 , [0,3]-> 45 || [1,0] -> 23
        }
    }        

    // accessing elements of arr3

    int my_value = arr3[1][8]; // error - array index out of bounds


    // printing array elements using for loop
    printf("Elements of the array arr3:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Element at arr3[%d][%d]: %d\n", i, j, arr3[i][j]); // Print each element of the array
        }
    }
    
    return 0;
}