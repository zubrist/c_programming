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

// frunction to delete node form Front 

void deleteFromFront(struct Node **head){
    // Case1 : check if the list is empty
    if(*head == NULL){
        printf(" List is EMPTY. \n");
    }

    // case 2 : otherwise 

    struct Node *temp =  *head; // temp is pointing the node , the head is pointing to

    // Move the head pointer to the next node

    *head = (*head)-> next;

    // free the deleted node

    free(temp);
}


int  main(){

    struct Node *head = NULL;

    addAtEnd(&head, 10);
    addAtEnd(&head, 20);
    addAtEnd(&head, 30);

    printf(" Initial List: \n");
    display(head);


    deleteFromFront(&head);

    printf("  List  after deletion : \n");
    display(head);

    return 0;

}