#include<stdio.h>

int bank_balance = 1000; // global variable with static storage class

void withdraw(int amount) {
    static int total_withdrawn = 0; // static variable to keep track of total withdrawn amount
    if (amount <= bank_balance) {
        bank_balance -= amount;
        total_withdrawn += amount;
        printf("Withdrawal successful! Amount: %d, Remaining balance: %d, Total withdrawn: %d\n", amount, bank_balance, total_withdrawn);
    } else {
        printf("Insufficient balance for withdrawal of %d. Current balance: %d\n", amount, bank_balance);
    }
}

void deposit(int amount) {
    bank_balance += amount;
    printf("Deposit successful! Amount: %d, New balance: %d\n", amount, bank_balance);
}
