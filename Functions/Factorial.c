/*Write a function that returns the factorial of a provided integer.*/

#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        // Factorial is not defined for negative numbers
        return 0;
    }
    
    unsigned long long result = 1;
    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}

int main() {
    int n = 3;
    unsigned long long result = factorial(n);

    printf("Factorial of %d is %llu\n", n, result);

    return 0;
}