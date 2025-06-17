/*

do {
// Your code logic here
}while(condition);
*/

#include <stdio.h>
int main(){
    int i = 1;

    do{
        printf("%d ", i); // i = 1 
        i++; // i =  11
    }while(i <= 10); //  false


    return 0;
}

#include <stdio.h>
int main(){
    int i = 2;

    do{
        printf("%d",i); // 2 ,4  ,6 ,8 , 10
        i += 2 ;// 4 ,6 ,8 ,10, 12
    }while(i <= 10); // true, true , true, true, false
    
    return 0;
}