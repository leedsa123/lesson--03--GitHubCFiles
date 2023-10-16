/*Create a struct name SensorData with a float temperature member.
In test_main:
Create a SensorData variable named d1 and affect temperature to 3
Create a SensorData variable named d2 and affect temperature to 2
Create a SensorData variable named d3 whose temperature value is d1 temperature + d2 temperature*/
#include <stdio.h>

// Define the SensorData struct
struct SensorData {
    float temperature;
};

void test_main() {
    // Create a SensorData variable named d1 and set its temperature to 3
    struct SensorData d1;
    d1.temperature = 3.0;

    // Create a SensorData variable named d2 and set its temperature to 2
    struct SensorData d2;
    d2.temperature = 2.0;

    // Create a SensorData variable named d3 and set its temperature to the sum of d1 and d2 temperatures
    struct SensorData d3;
    d3.temperature = d1.temperature + d2.temperature;

    // Print the temperature values of d1, d2, and d3
    printf("d1 temperature: %.2f\n", d1.temperature);
    printf("d2 temperature: %.2f\n", d2.temperature);
    printf("d3 temperature: %.2f\n", d3.temperature);
}

int main() {
    test_main(); // Call the test_main function
    return 0;
}