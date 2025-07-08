#include <stdio.h>

int findSum(int n) {
    if (n != 0) // base condition
        // sum() function calls itself
        return n + findSum(n-1);
        // 10+findSum(9) 
            // 10+9+findSum(8)
            // 10+9+8+findSum(7)  
            // 10+9+8+7+findSum(6)
            // 10+9+8+7+6+findSum(5)
            // 10+9+8+7+6+5+findSum(4)
            // 10+9+8+7+6+5+4+findSum(3)
            // 10+9+8+7+6+5+4+3+findSum(2)
            // 10+9+8+7+6+5+4+3+2+findSum(1)    
            // 10+9+8+7+6+5+4+3+2+1+findSum(0)
            
    else
        return n;
        // 10+9+8+7+6+5+4+3+2+1+0 = 55
}

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number); // 55

    printf("sum = %d", result); 
    return 0;
}
