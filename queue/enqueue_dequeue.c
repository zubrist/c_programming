#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct  node* next;
};

 struct node *front = NULL;
 struct node *rear = NULL;


void enqueue(int d){

    struct node *newNode = (struct node*) malloc(sizeof(struct node));

    newNode -> data = d;
    newNode -> next = NULL;

    if((front == NULL) && (rear == NULL)) {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
    

}


void dequeue(){
    struct node * temp;
    temp = front;
    if((front == NULL) && (rear== NULL)){
        printf("\n QUEUE is Empty , nothing more to delete..");
    }

    else{
        front  = front->next;
        free(temp);
    }

}

void display(){
    struct node* temp;

    if((front == NULL) && (rear == NULL)){
        printf("\n QUEUE is Empty \n");
    }
    else{
        temp = front;
        while (temp){
            printf(" %d ", temp->data);
            temp = temp->next;
        }
    }
}


void main(){

    // print("")

    // num= 5;

    display();

    enqueue(5);

    enqueue(10);
    enqueue(12);
    enqueue(13);
    display();

    printf("after Dequeue:\n");

    dequeue();
    display();


}