/*1. In test_main : 
Create an array of SensorData with three values
Fill the values yourself
Display the result
2. make a float average(SensorData* values, int n_values) which computes the average of all Sensor Data values*/
#include <stdio.h>

// Define a struct for SensorData
struct SensorData {
    float value;
};

// Function to compute the average of SensorData values
float average(struct SensorData* values, int n_values) {
    if (n_values == 0) {
        return 0.0; // Return 0 if there are no values to average
    }

    float sum = 0.0;
    for (int i = 0; i < n_values; i++) {
        sum += values[i].value;
    }

    return sum / n_values;
}

int test_main() {
    // Create an array of SensorData with three values and fill them
    struct SensorData data[3];

    data[0].value = 10.5;  // Replace with your first value
    data[1].value = 20.3;  // Replace with your second value
    data[2].value = 15.8;  // Replace with your third value

    // Display the values
    printf("Sensor Data Values: ");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", data[i].value);
    }
    printf("\n");

    // Calculate and display the average
    float avg = average(data, 3);
    printf("Average: %.2f\n", avg);

    return 0;
}

int main() {
    // This is an empty main function since you wanted to use test_main
    return test_main();
}