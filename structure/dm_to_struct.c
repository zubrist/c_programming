/*
Dymaic memory allocation of struct

malloc: 

ptr = (castType*)malloc(size)


int arr[size];



*/

#include <stdio.h>
#include <stdlib.h>

struct person {
    int age;
    float weight;
    char name[30];
};


int main(){

struct person *ptr;

int numberOfPerson = 2;

ptr = (struct person*)malloc(numberOfPerson * sizeof(struct person));

/*
address    person
   000      p1
   051      p2


*/

for(int i = 0 ; i< numberOfPerson; ++i)
{
    printf(" Enter: AGE WEIGHT NAME \n");
    scanf("%d %f %s", &(ptr+i)->age,&(ptr+i)->weight, &(ptr+i)->name); 
}


/// Displaying 

for( int i =0 ; i< numberOfPerson; ++i){
    printf("Name: %s\tAge:%d\tWeight:%f \n",(ptr+i)->name,(ptr+i)->age,(ptr+i)->weight);
}

return 0;
}