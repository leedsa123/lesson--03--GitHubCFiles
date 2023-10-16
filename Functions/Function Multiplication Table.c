/*Write a function that displays the multiplication table of a provided integer.
Example: For n = 2, we display:
2 x 0 = 0
2 x 1 = 2
Etc ... */

#include <stdio.h>
void print_table(int range, int num)
{

// Declare a variable to store the product
    int mul;
// For loop to calculate the table
        for (int i = 1; i <= range; i++) {
// To store the product
        mul = num * i;
 
// Print the table
        printf("%d * %d = %d", num, i, mul);
 
// Proceeding to next line
        printf("\n");
    }
}
// Driver code
int main()
{
 
// The range of the table
    int range = 10;
 
// The number to calculate the table
    int num = 5;
 
// Calling the Function
    print_table(range, num);
 
    return 0;
}