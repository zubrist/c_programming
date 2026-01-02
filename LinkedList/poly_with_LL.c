#include <stdio.h>
#include <stdlib.h>


// 4x3 + 9x2 .. + 7 

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
        
        /*
         t1(0X234a)
          ----------------------
          | 4   |  3   |  t2   |
          ----------------------                   t2(0X3asd4)                t3
                                                    ----------------------      ------------------------
                                                    | 5   |  2   |  t3 |      |   3  |  1     |  NULL |
                                                    ----------------------     ------------------------
                ^                                                                     ^
                |                                                                      |
                H                                                                      L

        */

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


    return 0;

}