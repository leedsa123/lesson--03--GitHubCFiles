/*1. Fill the function compute which returns 1 if  n1 > 10  AND n2 > 0
0 otherwise
2. In the test_main function create two numbers, and call your function with them. 
Store the result in a third variable and display it*/

#include <stdio.h>

int compute(int n1, int n2);

int main() {
    int num1 = 12;
    int num2 = 5;
    int result = compute(num1, num2);

    printf("Result: %d\n", result);

    return 0;
}

int compute(int n1, int n2) {
    if (n1 > 10 && n2 > 0) {
        return 1;
    } else {
        return 0;
    }
}


/*In this code:
The compute function is defined as specified earlier.
In the main function, two numbers, num1 and num2, are created and initialized 
with values (12 and 5 in this case).
The compute function is called with num1 and num2 as arguments, and the result 
is stored in the result variable.
Finally, the result is displayed using printf.
When you run this program, it will check if num1 is greater than 10 and num2 is 
greater than 0. In this case, both conditions are met, so the compute function will 
return 1, and the result will be displayed as Result: 1.*/
