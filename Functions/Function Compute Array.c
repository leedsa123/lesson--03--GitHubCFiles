/*1. Fill the function compute which returns 1 if  n1 > 10  AND n2 > 0
0 otherwise
2. In the test_main function create two numbers, and call your function with them. 
Store the result in a third variable and display it*/

#include <stdio.h>

int multiply_values(int* values, int n_values);

int main() {
    int arr[] = {2, 4, 6, 8}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    int result = multiply_values(arr, size);
    
    printf("Total of array values: %d\n", result);

    return 0;
}

int multiply_values(int* values, int n_values) {
    if (n_values <= 0) {
        return 0; 
    }

    int total = 1; 

    for (int i = 0; i < n_values; i++) {
        total *= values[i]; 
    }

    return total;
}