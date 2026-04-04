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


int searchNode(struct Node *head, int target){
    struct Node *temp = head;

    int pos = 1;

    while(temp != NULL){
        if( temp-> data == target){
            return pos;   // Element Found at this position 
        }
        temp = temp -> next;
        pos++;

    }

    

    return -1 ;

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

    // here we can ask the user to give the target value
    /*
        printf(" Enter the element to seaech")

        scanf("%d", &target)
    */
    int position = searchNode(head , 30);

    if(position != -1){
        printf(" target value found at %d location. \n" , position);

    }
    else {
         printf(" target value not found");
    }


    return 0;

}