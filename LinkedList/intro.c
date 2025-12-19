
/*
NODE : data | prt


struct Node{
    int data;           
    struct Node *ptr;
}; 

___________
|data | prt| ->   |data | prt| 
````````````
*/


#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;           
    struct Node *ptr;
}; 


void display(struct Node* next)
{
    while(next != NULL){
        printf("%d ->", next->data);
        next = next->ptr;
    }
}

int main(){

    // initialize nodes
    struct Node *head= NULL;
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;

    // allocating memory
    one =(struct Node*)  malloc(sizeof(struct Node));
    two =(struct Node*)  malloc(sizeof(struct Node));
    three =(struct Node*)  malloc(sizeof(struct Node));

    //assigining values
    one-> data = 5;
    two-> data = 7;
    three-> data = 10;

    // definining next nodes

    one-> ptr = two;
    two-> ptr = three;
    three-> ptr = NULL;

    head = one ;

    display(one);

    return 0;
}