/*Write a function that calculates and returns the area of the ring formed 
by two circles with respective radius r1 and r2.*/

#include <stdio.h>

double calculateRingArea(double r1, double r2) {
    if (r1 <= 0 || r2 <= 0) {
        // Handle invalid input (negative or zero radius)
        return -1.0;
    }

    double area1 = 3.14159265359 * r1 * r1; // Area of the smaller circle
    double area2 = 3.14159265359 * r2 * r2; // Area of the larger circle

    double ringArea = area2 - area1; // Area of the ring

    return ringArea;
}

int main() {
    double r1, r2;
    printf("Enter the radius of the smaller circle (r1): ");
    scanf("%lf", &r1);

    printf("Enter the radius of the larger circle (r2): ");
    scanf("%lf", &r2);

    double ringArea = calculateRingArea(r1, r2);

    if (ringArea >= 0) {
        printf("The area of the ring is: %lf\n", ringArea);
    } else {
        printf("Invalid input. Please enter positive radii.\n");
    }

    return 0;
}
/*In this code, we define a function calculateRingArea that takes 
two radius values r1 and r2 as input and returns the area of the ring. 
The main function demonstrates how to use this function and takes user input 
for the radii of the two circles. 
It also includes input validation to ensure that the radii are positive values.*/