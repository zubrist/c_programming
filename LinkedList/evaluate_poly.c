#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// p(x)= 4x3 + 9x2 +5x+ 7  || if x = 2 , p(2)= 32+ 36 + 10 + 7 = 85

struct Node {
    int coeff;
    int exp;
    struct Node *next;
};


void display(struct Node * p)
{
    printf("%dx%d", p->coeff, p->exp); // printing the 1st term
    p= p->next;

    while(p)
    {
        printf(" + %dx%d", p->coeff , p->exp); // printing the rest terms 
        p = p->next;
    }

    printf("\n");
}

int Eval(struct Node *p , int x){

    int val = 0;

    while(p)
    {           // 4 * x ^3
        val += p->coeff * pow(x,p->exp);
        p = p->next;
    }

    return val;

}
int main()
{

    struct Node *t, *last = NULL, *head = NULL;

    int num , i ;

    printf("Enter the numner of terms: ");
    scanf("%d",&num);

    printf("Enter the coeff. and exp for each term ");

    for(i = 0; i< num ; i++){
        printf("\n \nfor term %d: " , i+1); // 1st
        t = (struct Node *) malloc(sizeof(struct Node)); // memory allocation 
        scanf("%d%d", &t->coeff, &t->exp); // storing the coeff and exp of each term 
        t-> next = NULL; 
        
       
        // if this is the first node , initilize the head and last

        //only in 1st iteration (i.e i=0)
        if(head == NULL)
        {
            head = t; // t1
            last = t; //t1
        }

        // after first iteration (i.e i > 0)
        else 
        {
            last->next = t; // t= t2 | t3 | t4
            last = t ; // last -> t2 | t3 , t4

        }

    }

    display(head);
    int x;
    printf( " Enter value of x : ");
    scanf("%d", &x);
    
    printf("\n the value if the polynomial : %d", Eval(head,x));

    return 0;

}