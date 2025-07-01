#include<stdio.h>

/*
Return type: what it gives back

Function name: addTwoNumbers (camelCase) / add_two_numbers (snake_case)
 
parameters: the values that the function takes as input -> parametrs are in ->   ( ... , ... , ...)

function body: the code that runs when the function is called 

for example -> int add_two_number(int a, int b) {
                return a + b;
            }


function prototype: a declaration of the function that tells the compiler about the function's name, return type, and parameters. 

eg. int addTwoNumbers(int a, int b); // function prototype

funtion definition: the actual implementation of the function that contains the code to be executed when the function is called.
eg.  int addTwoNumbers(int a, int b) {
                return a + b;
            }
*/

// function to add two numbers
int addTwoNumbers(int a , int b){ // these parameters are called formal parameters
    int sum = a + b; // add the two numbers
    return sum; // return the sum
}

int addThreeNumbers(int a , int b, int c){
    int sum = a + b + c; // add the three numbers
    return sum; // return the sum
}


int main(){
    int num1 = 10; // first number
    int num2 = 20; // second number
    int num3 = 30; // third number, not used in this example
    int sum_result;
    int sum_of_three;
    char n1 ='A';
    char n2 = 'B';

    float number1 = 10.5; // first number as float
    float number2 = 20.5; // second number as float

    //sum_result = addTwoNumbers(num1,num2); // call the function to add the two numbers
    //sum_result = addTwoNumbers(n1,n2); // call the function to add the two numbers
    sum_result = addTwoNumbers(number1, number2); // call the function to add the two numbers as integers
    
    sum_of_three = addThreeNumbers(num1, num2, num3); // call the function to add three numbers
    //printf("The sum of %d and %d is: %d\n", num1, num2, sum_result); // print the result
    printf("The sum of %f and %f is: %d\n", number1, number2, sum_result); // print the result

    printf("The sum of %d, %d and %d is: %d\n", num1, num2, num3, sum_of_three); // print the result of three numbers

}