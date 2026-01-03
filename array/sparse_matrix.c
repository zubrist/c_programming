#include <stdio.h>


int main(){


int sparse_matrix[4][5] = {
                          {0,0,3,0,4},
                          {0,0,5,7,0},
                          {0,0,0,0,0},
                          {0,2,6,0,0} 
                         };


/*
Row  col value
0    2    3

 ROW   0 0 1 .. 
 COL   2 4 2 ..
 Val   3 4 5 ..

*/
int size = 0;

for(int i=0 ; i<4; i++){
    for(int j=0; j<5; j++){
        if(sparse_matrix[i][j] != 0){ // calculating how many non-zero elements are there
            size++; // 6 
        }
    }
}

int new_matrix[3][size];

int k = 0 ;

for(int i=0 ; i<4 ; i++){
    for(int j=0; j<5; j++){
        if(sparse_matrix[i][j] !=0)
        {
            new_matrix[0][k] = i;
            new_matrix[1][k] = j;
            new_matrix[2][k] = sparse_matrix[i][j];
            k++;
        }
    }
}

for(int i =0; i<3 ; i++){
    for(int j=0; j<size; j++)
    {
     printf("%d  ", new_matrix[i][j]);   
    }
    printf("\n");
}
return 0;

}
