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


// fuction to delete node from the END
void deleteFromEnd(struct Node **head){
    // case 1 : check if the list is empty
    if(*head == NULL){
        printf(" List is EMPTY. \n");
        // return ;
    }

    // Otherwise 

    struct Node *temp , *prev;
    
    temp = prev = *head; // Both pointing to the start node
    // prev = *head;

    while(temp->next != NULL){
        prev = temp ;
        temp = temp ->next ;
    }

    //  after reaching End of the list 
    prev->next = NULL ; // Break the line

    free(temp); // Free the memory of the last node 

    printf("Last node deleted. \n");


}



int  main(){

    struct Node *head = NULL;

    addAtEnd(&head, 10);
    addAtEnd(&head, 20);
    addAtEnd(&head, 30);

    printf(" Initial List: \n");
    display(head);


    deleteFromEnd(&head);



    printf("  List  after deletion : \n");
    display(head);

    deleteFromEnd(&head);

    printf("  List  after deletion : \n");
    display(head);



    
    deleteFromEnd(&head);
    deleteFromEnd(&head);


    return 0;

}