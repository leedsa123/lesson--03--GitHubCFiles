#include <stdio.h>
#include <stdlib.h>

float* array_threshold(float* values, int n_values, float max_value) {
    // Create a new array to store the thresholded values
    float* thresholded_values = (float*)malloc(n_values * sizeof(float));
    
    if (thresholded_values == NULL) {
        return NULL;
    }
    
    for (int i = 0; i < n_values; i++) {
        if (values[i] > max_value) {
            thresholded_values[i] = max_value;
        } else {
            thresholded_values[i] = values[i];
        }
    }
    
    return thresholded_values;
}

int main() {
    float input_values[] = {1.0, 10.0, 5.0};
    int n_values = sizeof(input_values) / sizeof(input_values[0]);
    float max_value = 5.0;
    
    // Call the array_threshold function
    float* thresholded_values = array_threshold(input_values, n_values, max_value);
    
    if (thresholded_values != NULL) {
        printf("Thresholded values: [");
        
        for (int i = 0; i < n_values; i++) {
            printf("%.1f", thresholded_values[i]);
            if (i < n_values - 1) {
                printf(", ");
            }
        }
        printf("]\n");
        
        free(thresholded_values);
    } 
        else {
        printf("Memory allocation failed.\n");
    }
    
    return 0;
} 