/*

       head
        |
        `
       First -> Second -> third - > forth - NULL
                         ^
                         | (k location)
                        newNode  ( insert)


*/



#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;           
    struct Node *ptr;
};





// traverse the linked list
void display(struct Node* next)
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

    struct Node *temp , *p;

    temp = (struct Node*)malloc(sizeof(struct Node));

    printf("enter the location of insertion: ");
    int k; //3 
    scanf("%d",&k);

    printf("Enter the value of the new node to insert at the end: ");
    int newVal;
    scanf("%d", &newVal); // 25
    
    temp->data = newVal; // 25
    
    if (k == 1){
    temp -> ptr = head;
    head = temp;
    }

    // 10 20 30 40
    else {
        p = head;  // p =10 
        for (int i = 1; i < k-1 && p!= NULL; i++ )
        {
            p = p->ptr; // p moves one node ahead // p =20
        }
    
        if(p != NULL){      //
            temp->ptr= p->ptr;  // 
            p->ptr = temp;

        }

    }

    display(head);


    return 0;
}