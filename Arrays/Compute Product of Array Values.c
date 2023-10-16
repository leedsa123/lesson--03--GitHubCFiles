/*Fill the following function int multiply_values(int* values, int n_value) which computes the product of all array values.
In test_main, create an array with 3 values and test you function with it. Display the result*/

#include <stdio.h>

int multiply_values(int* values, int n_values);

int main() {
    int arr[] = {2, 4, 6, 8, 10}; // Sample array with 3 values
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int result = multiply_values(arr, size);
    
    printf("Total of array values: %d\n", result);

    return 0;
}

int multiply_values(int* values, int n_values) {
    if (n_values <= 0) {
        return 0; // Handle the case of an empty array or invalid size.
    }

    int total = 1; // Initialize the product to 1.

    for (int i = 0; i < n_values; i++) {
        total *= values[i]; // Multiply the current value with the product.
    }

    return total;
}