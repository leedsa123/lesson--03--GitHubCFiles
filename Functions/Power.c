/*Write a function that returns the result of a provided integer n raised 
to the power of another provided integer p : np*/
#include <stdio.h>

double power(int n, int p) {
    double result = 1.0;
    int i;
    
    for (i = 0; i < p; i++) {
        result *= n;
    }

    return result;
}

int main() {
    int n = 2;
    int p = 4;
    double result = power(n, p);

    printf("%d^%d = %.2lf\n", n, p, result);

    return 0;
}