/*

union unionName{
 data_type member1;
 data_type member2;
 ....
};

*/

#include <stdio.h>
union Data{
    int i;
    float f;
    char c;
};

int main(){

        union Data reja;
        reja.i = 10;
        printf("Data as Integer: %d\n", reja.i);
        reja.f = 220.5;
        printf("Data as Float: %.2f\n", reja.f);
        reja.c = 'A';
        printf("Data as Character: %c\n", reja.c);


    return 0;
}