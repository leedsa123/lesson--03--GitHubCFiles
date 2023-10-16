#include <stdio.h>

void bounce(int n) {
    if (n > 0) {
        printf("%d ", n);
        bounce(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n > 0) {
        bounce(n);
        printf("\n");
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}