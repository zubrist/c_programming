#include <stdio.h>
#include <string.h>

//  defining a Student structure 

struct  Student{
   char name[20];
   int  age;
   char   gender;
   float    height;
};


int main(){
    struct Student Ram, Subho , Rina;

    Subho.age=20;
    Subho.gender='M';
    Subho.height = 145.43;

    /*
    strcopy( variable, "string")  , variable = "string"
    */

    strcpy(Subho.name, "Subho Chakroborty");
    
    // storing student Ram`s information
    Ram.age = 22;
    Ram.gender = 'M';
    Ram.height= 135.23;
    strcpy(Ram.name, "Ram Sen");

    // Stroing Rina`s information
    Rina.age = 21;
    Rina.gender = 'F';
    Rina.height= 140.23;
    strcpy(Rina.name, "Rina Das");

    printf("Age of Subho: %d \n",Subho.age);
    printf("gender of Subho: %c \n",Subho.gender);
    printf("Height of Subho: %f \n",Subho.height);

    printf("infromation of %s\n",Rina.name);
    printf("Age: %d\n",Rina.age);
    printf("Heigt: %f\n", Rina.height);
    return 0;
}