/*

       head
        |
        `
       First -> Second - > third - > forth ->  NULL
                                            ^
                                            |
                                         newNode  ( ins)


*/


#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;           
    struct Node *ptr;
};





// traverse the linked list
void display(struct Node * next)
{   
    while(next != NULL){
        printf("%d ->", next->data);
        next = next->ptr;
    }
    printf("NULL\n");
}

int main (){
    struct Node *head = NULL;

    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    
    // allocate memory in the HEAP
    first = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    forth = (struct Node*) malloc(sizeof(struct Node));
    
    
    first-> data = 10;
    second-> data = 20;
    third-> data = 30;
    forth-> data = 40;

    first->ptr = second;
    second-> ptr = third;
    third->ptr= forth;
    forth->ptr=NULL;

    head = first;

    struct Node *temp;

    temp = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the value of the new node to insert at the end: ");
    int newVal;
    scanf("%d", &newVal);
    temp-> data = newVal;
    forth -> ptr = temp;
    temp-> ptr = NULL;
    

    display(head);


    return 0;
}