/*
WAP to find number of twin primes in a given range.
Twin primes are pairs of prime numbers that have a difference of two, such as (3, 5) and (11, 13).


start =3  end = 20

is_prime(3) -> yes 
is_prime(5) -> yes
(3, 5)

is_prime(7) -> yes
is_prime(9) -> no 

*/

#include <stdio.h>


int is_prime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Is a prime number
}

int main()
{
    int start, end ;
    int count= 0;

    printf("Enter the start of the range(min:3): ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    for( int i = start; i <= end - 2; i++) { // 11
        if (is_prime(i) && is_prime(i + 2)) { // t , t
            printf("(%d, %d)\n", i, i + 2);
            count++; // 3
        }

    }
    printf("Total twin prime pairs in the range [%d, %d]: %d\n", start, end, count);
    return 0;
}