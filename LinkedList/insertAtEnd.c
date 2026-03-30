
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// void addAtStart(struct Node **head, int val)
// {
//     struct Node *newNode  = malloc(sizeof( struct Node));
//     newNode -> data = val;
//     newNode -> next = *head;
//     *head = newNode;
// }
 
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

int  main(){

    struct Node *head = NULL;

    addAtEnd( &head, 10);
    addAtEnd(&head, 20);
    // addAtStart(&head,5);
    addAtEnd(&head, 30);

    display(head);


    return 0;

}