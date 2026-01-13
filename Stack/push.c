/*
Input : New ITEM 
output : a stack with the new  ITEM in TOP of the stack 
stack_size = 5 

if TOP >= size then 
    print ("stack is full")

Else 
    TOP = TOP +1 
    array[TOP] = ITEM
 
stop
*/


/*
      POP 

Input : A stack with elements 
output : Removes the TOP elements from the stack if its not empty 


if TOP== -1 then 
    print("stack is empty")

Else 
    ITEM= array[TOP]
    TOP = TOP-1;
    
stop     
*/

#include <stdio.h>
#include <stdbool.h>
#define SIZE 5 


int stack[SIZE];
int top = -1; 


void push(int item){
    int value= 5;
    if(top >= SIZE-1){ //
        printf("Stack Overflow\n");
        return;
    }
    //top++; // top = 0
    stack[++top] = item; // stack[0] = 8
    printf("%d pushed to the stack\n", item);

}

int pop(){
    if( top ==-1){
        printf("Stack Underflow");
        return -1;
    }
    int item = stack[top];
    top--;
    printf("%d is popped from stack \n", item);
    return item;

}

int peek(){
    int x = stack[top];
    printf("%d is top of the stack",x);
    // printf("%d is index of top", top);
    return x ;

}

bool isEmpty(){
    if(top == -1){
        printf("Stack is Empry");
        return true;
    }
    printf("Stack is not Empty\n");
    return false;
}

bool isFull(){
    if(top== SIZE-1){
        printf("Stack if Full\n");
        return true;
    }
    printf("Stack is not full\n");
    return false;

}

void display(){
    if(top ==-1){
        printf("Stack is empty");
        return;
    }
    printf(" Stack(  top -> bottom)\n");
    for(int i = top ; i>=0 ; i--){
        printf(" | %d |\n", stack[i]);
    }

}

int main(){
    printf("Our stack:\n");
    push(8);
    push(9);
    printf("Enter a item to insert into Stack:\n");
    int number;
    scanf("%d",&number);
    push(number);

    push(11);
    display();

    isEmpty();

    pop();
    display();
    isEmpty();

    peek();

    isFull();
    return 0;

}