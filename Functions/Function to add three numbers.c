/*Create a function add_three_numbers (int n1, int n2, int n3) which add the values of the three numbers.
In test_main use your function and display the result*/

#include <stdio.h>

int add_three_numbers(int n1, int n2, int n3) {
    return n1 + n2 + n3;
}

void test_main() {
    int num1 = 2;  
    int num2 = 3; 
    int num3 = 7; 

    int sum = add_three_numbers(num1, num2, num3);

    printf("The sum of the three numbers is: %d\n", sum);
}

int main() {
    test_main(); 
    return 0;
}


