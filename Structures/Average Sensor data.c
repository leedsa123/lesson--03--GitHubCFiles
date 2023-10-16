#include <stdio.h>

// Define a struct to represent SensorData
typedef struct {
    float value;
} SensorData;

// Function to compute the average of two SensorData instances
float average_two_sensor(SensorData s1, SensorData s2) {
    return (s1.value + s2.value) / 2.0;
}

int main() {
    // Create two SensorData instances
    SensorData sensor1 = {10.0};
    SensorData sensor2 = {15.0};

    // Calculate the average
    float result = average_two_sensor(sensor1, sensor2);

    // Display the result
    printf("Average Sensor Value: %.2f\n", result);

    return 0;
}
/*In this code:

We define a SensorData struct to represent the sensor data, and it contains a single field value.
The average_two_sensor function takes two SensorData instances, s1 and s2, and calculates their average.
In the main function, we create two instances of SensorData, set their values, and then call the 
average_two_sensor function to compute the average. Finally, we display the result using printf.
Compile and run this code, and it will calculate and display the average of the two sensor data values.*/

