#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


void addAtEnd(struct Node **head, int val)
{
    struct Node *newNode  = malloc(sizeof( struct Node));
    newNode -> data = val;
    newNode -> next = NULL;
    
    if ( *head ==  NULL){ // when the list is empty
        *head = newNode;
    }
    // if the list is not Empty
    else {
        struct Node *lastNode = *head ;

        while (lastNode -> next != NULL){
            lastNode = lastNode -> next;
        }
        lastNode -> next = newNode;
    }
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


void reserveList(struct Node **head){
    struct Node *prev = NULL;
    struct Node *temp = *head;
    struct Node *next_node = NULL;

    while(temp != NULL){
        next_node = temp-> next;
        temp ->next = prev;

        prev = temp;
        temp = next_node;
    }
    *head = prev;

    printf("\n Linked List Reversed.\n");

}


int  main(){

    struct Node *head = NULL;

    addAtEnd(&head, 10);
    addAtEnd(&head, 20);
    addAtEnd(&head, 30);
    addAtEnd(&head, 40);
    addAtEnd(&head, 50);
    addAtEnd(&head, 60);

    printf(" Initial List: \n");
    display(head);

    reserveList(&head);
    display(head);


    return 0;

}