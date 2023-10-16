/*
Write a program that calculates and displays the corresponding tax for a provided income based on the following rules:
No tax for the first 10,000 euros of income.
10% tax on the portion of income between 10,000 and 30,000 euros.
30% tax on the portion of income between 30,000 and 60,000 euros.
50% tax on the portion of income exceeding 60,000 euros.*/

#include <stdio.h>
int main()
{

    float income = 100000;

    float taxes;

    if (income <= 10000)
    {
        taxes = 0;
    }
    else if (income > 10000 && income <= 30000)
    {
        taxes = (income - 10000) * 0.1; // 10%
    }
    else if (income > 30000 && income <= 60000)
    {
        taxes = 0 + 2000 + (income - 30000) * 0.3;
    }
    else if (income > 60000)
    {
        taxes = 0 + 2000 + 9000 + (income - 60000) * 0.5;
    }

    printf("Taxes = %g", taxes);

    }