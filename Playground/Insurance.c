/*Write a program that calculates and displays the deductible taken by the insurance company for a given amount of damage. 
The deductible is 10% of the damage, but it should not be less than 10 euros nor more than 500 euros.*/

#include <stdio.h>

int main()
{

    float amount = 4000;

    float deduct = amount * 0.1;

    if (deduct < 10)
    {
        deduct = 10;
    }
    else if (deduct > 500)
    {
        deduct = 500;
    }

    printf("The deductible is equal to %g", deduct);
}