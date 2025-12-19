
/*

struct name {
  data_type1 member1;
  data_type2 member2;
    ...
};

int main ()
{
    # to make a pointer of 'name' strcut
    struct name *namePtr, Reja;
}

    Reja.memmber1 = value ;

    namePtr->member1 = value;

*/



#include <stdio.h>

struct person {
    int age;
    float weight;
};

int main(){

    struct person *personPrt, Reja;

    personPrt = &Reja; // the address of Reja is stored in the pointer
 
    printf("enter age: ");
    scanf("%d", &personPrt -> age); // &Reja.age;


    printf("enter weight: ");
    scanf("%f", &personPrt -> weight); // &Reja.weight;


    // display 

    printf(" your age is : %d\n", personPrt->age);
    printf(" your weight is : %f\n", personPrt->weight);

}