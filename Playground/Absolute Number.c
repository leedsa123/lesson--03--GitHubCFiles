/*Create a program that calculates the absolute value of a given number. 
The program should take an input number, compute its absolute value function, and display it.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = -5;

    if (n >= 0)
        printf("The absolute value of %d is %d", n, n);
    else
        printf("The absolute value of %d is %d", n, -n);

    return 0;
}