/*Make a function float average(float* values, int n_values) 
that computes the average of all values in an array*/

#include <stdio.h>

float average(float* values, int n_values) {
    if (n_values <= 0) {
        return 0.0; 
    }

    float result = 0.0;

    for (int i = 0; i < n_values; i++) {
        result += values[i];
    }

    return result / n_values;
}

int main() {
    float data[] = {2.5, 3.0, 4.0, 1.5, 2.0}; 
    int n = sizeof(data) / sizeof(data[0]); 

    float avg = average(data, n);

    printf("The average of the values is: %.2f\n", avg);

    return 0;
}