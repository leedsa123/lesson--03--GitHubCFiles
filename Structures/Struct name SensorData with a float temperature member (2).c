/*Create a struct name SensorData with a float temperature member.
In test_main:
Create a SensorData variable named d1 and affect temperature to 3
Create a SensorData pointer named d_p1 and affect its value to the adress of d1. 
Set the temperature of d1 through d_p1. Display the temperature value both through d1 and d_p1 (-> versus dot)*/

#include <stdio.h>

// Define the SensorData struct
struct SensorData {
    float temperature;
};

void test_main() {
    // Create a SensorData variable named d1 and set its temperature to 3
    struct SensorData d1;
    d1.temperature = 3.0;

    // Create a SensorData pointer named d_p1 and assign its value to the address of d1
    struct SensorData *d_p1 = &d1;

    // Set the temperature of d1 through d_p1
    d_p1->temperature = 4.0;

    // Display the temperature value both through d1 (dot operator) and d_p1 (-> operator)
    printf("d1 temperature (dot operator): %.2f\n", d1.temperature);
    printf("d1 temperature (-> operator): %.2f\n", d_p1->temperature);
}

int main() {
    test_main(); // Call the test_main function
    return 0;
}

/*In this code, we first define the SensorData struct. 
In the test_main function, we create a SensorData variable named d1 and set its temperature to 3. 
We then create a pointer to SensorData named d_p1 and assign its value to the address of d1. 
After that, we use the -> operator to set and display the temperature value through d_p1 and use 
the . operator to access and display the temperature value through d1.*/
