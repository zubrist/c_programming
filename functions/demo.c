#include <stdio.h>

// () -> function
/*
declaration of a function 
    return_type function_name (Optional parameter_list){
        // body of the function
        return value;
    }
*/


// Function definition
int add(int a, int b) { // formala parameters
    return a + b;
}

int sub(int a, int b) { 
    return a - b;
}

int  mul( int a ,int b){ // 10 , 5 
    return a * b ;
}
// 10.5 * 45.7  * 8.0

float mulfloat(float a , float b, float c ){
    return a * b ;
}


int main(){ 
    printf("Hello, World!\n");
    int result=0;
    result = add(10,40); // Function call -> add(actual parameters) 
    printf("Sum is : %d" , result);

    return 0;
}

