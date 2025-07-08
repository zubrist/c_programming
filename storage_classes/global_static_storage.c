
#include<stdio.h>
static int count ; // global variable with static storage class

void func(){

    static int count = 0; // parmanent storage class variable
    auto int count2 = 0; // temporary storage class variable

    count++;
    count2++;

    printf("count = %d, count2 = %d\n", count, count2);
    }
int main(){
    
    printf("count= %d\n", count);
    func(); // count = 1, count2 = 1
    func(); // count = 2, count2 = 1
    func(); // count = 3, count2 = 1
    printf("count= %d\n", count);


    return 0;
}