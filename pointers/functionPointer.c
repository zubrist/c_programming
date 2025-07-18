#include<stdio.h>

void greeting(){
        printf("Hello, World! Happy Coding!!\n");
        
    }

int main(){
    // calling the function
    greeting(); // Output: Hello, World! Happy Coding!!

    void (*greetingPtr)() = greeting;

    //calling the function using function pointer
    greetingPtr(); // Output: Hello, World! Happy Coding!!


    return 0;
    
}