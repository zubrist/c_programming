#include <stdio.h>
#include <stdlib.h>


struct node {
    int val; // data
    struct node * next; // pointer
};

struct node * head = NULL; // defining a HEAD pointer 


void push(){ // function return type . funtion name
        // function body
        int data;

        struct node * ptr = (struct node*)malloc(sizeof(struct node));// Allocating memory for the new node

        // checking if memory allocation is fine

        if(ptr == NULL){
            printf("Unabke to Push the element , Memory ALLOCATION failed");
            return; // exit the function
        }

        printf("Enter the value you want to push: ");
        scanf("%d", &data); // taking input from user 

        ptr->val = data;


        if(head == NULL){// if the stack is empty 
            ptr-> next = NULL;// set the next to NULL as there are no other nodes
            head = ptr;
        }
        else {// insert the new node at the top of the stack
        ptr->next= head;
        head= ptr; // updated the new Head
        }
        printf(" Element %d pushed to the stack\n", data);

}

int main(){
    printf(" Performing PUSH() Operation on a Stack using Linked List :: \n");

    push();
    push();
    push();

    return 0;
}

