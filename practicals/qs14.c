// polynomial addition using linked list

/* 4x^3  + 3x^2 + 5x  

    3X^2 + 5 

=  4x^3 + 6x^2+ 5x +5    


*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff; // Coefficient of the term
    int pow; // Power of the term
    struct Node *next;  // pointer to next term
};

// Function for creating a new Node
struct Node* createNode(int coeff, int pow){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));// address allocation
    newNode->coeff = coeff;
    newNode->pow = pow;
    newNode->next = NULL; 
    return newNode;
}

// Function to insert a term at the end of the polynomial linked list

void insertTerm(struct Node** poly, int coeff, int pow)
{
    struct Node* newNode = createNode(coeff, pow);
    if (*poly == NULL) { 
        *poly = newNode; 
    } 
    else { 
    struct Node* temp = *poly; 
    while (temp->next != NULL) {
            temp = temp->next; 
        } 
        temp->next = newNode; 
        } 
    }


// function to display the polynomial 
void displayPoly(struct Node* poly) 
    { while (poly != NULL) 
        {
         printf("%dx^%d", poly->coeff, poly->pow);
         poly = poly->next; 
         if (poly != NULL) { 
            printf(" + ");
         } 
        } 
        printf("\n"); 
    }


// add two polynomials 

struct Node* addPoly(struct Node* poly1, struct Node* poly2){

    struct Node* result = NULL;
    struct Node* temp1 = poly1;
    struct Node* temp2 = poly2;


    // Traverse both lists 

    while(temp1!= NULL && temp2 != NULL){
        if(temp1->pow == temp2->pow ){
            insertTerm( &result, temp1->coeff + temp2->coeff, temp1->pow);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if( temp1->pow > temp2->pow){
            insertTerm(&result,temp1->coeff,temp1->pow);
            temp1= temp1->next;
        }
        else{
            insertTerm(&result,temp2->coeff,temp2->pow);
            temp2= temp2->next;
        }
    }


    while(temp1 != NULL){
        insertTerm(&result,temp1->coeff,temp1->pow);
        temp1= temp1->next;
    }

    while(temp2 != NULL){
       insertTerm(&result,temp2->coeff,temp2->pow);
        temp2= temp2->next;
    }

    return result;
    

}


int main (){

    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;

    struct Node* Sum = NULL;

    int n1, n2, coeff, pow,i;

    printf("Number of terms for polynomial 1: ");
    scanf("%d", &n1);

    printf("Enter terms for Polynomial 1 ( coeff pow): \n");
    for(i = 0; i < n1; i++ ){
        scanf("%d %d", &coeff,&pow);
        insertTerm(&poly1,coeff,pow);

    }
    printf("Number of terms for polynomial 1: ");
    scanf("%d", &n2);

    printf("Enter terms for Polynomial 2 ( coeff pow): \n");
    for(i = 0; i < n2; i++ ){
        scanf("%d %d", &coeff,&pow);
        insertTerm(&poly2,coeff,pow);

    }

    printf("\n Polynomial 1 : ");
    displayPoly(poly1);

    printf("\n Polynomial 2 : ");
    displayPoly(poly2);

    Sum = addPoly(poly1, poly2);

    printf("Additon of given two polynomials: \n");
    displayPoly(Sum);

    return 0;

}