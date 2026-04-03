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


int getCount(struct Node *head){
    int count = 0;

    struct Node *temp = head ;
    while( temp != NULL){
        count ++;
        temp = temp ->next;
    }

    return count;
}

// function to delete from intermediate position 
void deleteFromMiddle(struct Node **head , int pos){

    int nodeCount = getCount(*head);

    // position must between first and last node

    if ( *head != NULL &&  pos > 1 && pos < nodeCount){
        struct Node *temp , *prev;

        temp = prev = *head;

        int ctr = 1;

        /// traverse untill the target position is reached 

        while (ctr < pos){
            prev = temp ; 
            temp = temp->next;
            ctr ++;
        }
        prev -> next = temp -> next ; 

        free(temp);

        printf( "\n Node at position %d is deleted \n ", pos);

    }
    else {
        printf(" Invalid Position \n");
    }
}



int main (){


    struct Node *head = NULL;

    addAtEnd(&head, 10);
    addAtEnd(&head, 20);
    addAtEnd(&head, 30);
    addAtEnd(&head, 40);
    addAtEnd(&head, 50);
    addAtEnd(&head, 60);
    addAtEnd(&head, 70);
    addAtEnd(&head, 80);

    printf(" Initial List: \n");
    display(head);

    // ask the user for position 
    // index = position given by user


    // or hardcoded position

    deleteFromMiddle(&head, 4);


    printf("  List After Deletion: \n");
    display(head);

    deleteFromMiddle(&head, 2);

    printf("  List After Deletion: \n");
    display(head);


}