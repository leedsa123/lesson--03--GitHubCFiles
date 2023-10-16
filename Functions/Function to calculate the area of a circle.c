/*Write a function that computes and returns the area of a circle with provided radius r.*/

#include <stdio.h>
#include <math.h>

double calculateCircleArea(double r) {
    if (r <= 0) {
        // Handle invalid input (negative or zero radius)
        return -1.0;
    }

    double area = M_PI * r * r; // Area formula for a circle (π * r^2)

    return area;
}

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double circleArea = calculateCircleArea(radius);

    if (circleArea >= 0) {
        printf("The area of the circle is: %lf\n", circleArea);
    } else {
        printf("Invalid input. Please enter a positive radius.\n");
    }

    return 0;
}
