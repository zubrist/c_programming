/*




*/



#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void addAtStart(struct Node **head, int val)
{
    struct Node *newNode  = malloc(sizeof( struct Node));
    newNode -> data = val;
    newNode -> next = *head;
    *head = newNode;
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

    addAtStart(&head, 10 );
    addAtStart(&head, 20);
    addAtStart(&head, 5);
    

    display(head);


    return 0;

}