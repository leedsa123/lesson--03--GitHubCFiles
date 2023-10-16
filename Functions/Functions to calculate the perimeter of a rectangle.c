/*Write a function that computes and returns the perimeter of a rectangle 
(length and width are integers provided as parameters).*/

#include <stdio.h>

int calculateRectanglePerimeter(int length, int width) {
    if (length <= 0 || width <= 0) {
        // Handle invalid input (negative or zero values)
        return -1;
    }

    int perimeter = 2 * (length + width); // Perimeter formula for a rectangle

    return perimeter;
}

int main() {
    int length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    int perimeter = calculateRectanglePerimeter(length, width);

    if (perimeter >= 0) {
        printf("The perimeter of the rectangle is: %d\n", perimeter);
    } else {
        printf("Invalid input. Please enter positive values for length and width.\n");
    }

    return 0;
}
/*In this code, we define a function calculateRectanglePerimeter that takes two integer parameters, 
ngle. The main function demonstrates how to use this function and takes user input for the length 
includes input validation to ensure that the provided values are positive integers.*/