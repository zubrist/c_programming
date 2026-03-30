
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


 
void addAtMiddle(struct Node **head, int val, int pos)
{   
    struct Node *newNode  = malloc(sizeof( struct Node));
    newNode -> data = val;
    newNode -> next = NULL;

    if(pos == 0){
        newNode -> next = *head;
        *head = newNode;
        return;
    }

    struct Node *prev = *head;
    for(int i = 0; i< pos-1 ; i++){
        if( prev == NULL){
            printf(" Position INVALID");
            free(newNode); // optinal
            return ; 
        }
        prev = prev ->next ;
    }

    // First , Connect the newNode to the next of prev
    newNode-> next = prev->next;

    // Then , Connect previous node with newNode
    prev->next = newNode;

}

void display(struct Node * head)
{   
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int  main(){

    struct Node *head = NULL;

    addAtMiddle(&head, 5, 0);
    addAtMiddle(&head, 15, 0);
    addAtMiddle(&head, 35, 0);
    addAtMiddle(&head, 25, 0);
    addAtMiddle(&head, 30,2);
    addAtMiddle(&head, 20,3);
    

    
    display(head);


    return 0;

}