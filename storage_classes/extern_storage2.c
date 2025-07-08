#include<stdio.h>
extern int bank_balance; // telling the compiler that this variable is defined in another file -> go find it 

void withdraw(int amount);
void deposit(int amount);


int main(){

    printf("I have %d in my bank account.\n", bank_balance);


    return 0;
}