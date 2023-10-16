/*
Write a program that calculates and displays the corresponding tax for a provided income based on the following rules:
No tax for the first 10,000 euros of income.
10% tax on the portion of income between 10,000 and 30,000 euros.
30% tax on the portion of income between 30,000 and 60,000 euros.
50% tax on the portion of income exceeding 60,000 euros.*/

#include <stdio.h>
int main()
{
    float income;
    float taxes;

    printf("What is your income?  ");
    scanf("%f", &income);

    if(income<= 10000){
        tax = 0;
    }
    else if (income<= 30000){
        tax = (income - 10000)*0.1;
    }
        else if (income<=60000){
            tax - (20000 * 0.1) = ((income - 30000)*0.3);
        }
        else {
            tax = (20000*0.1) + (30000 * 0.3) + ((income - 60000)*0.5);
        }
        printf("Your income tax on $%g, is equal to $%g.", income tax);

        return 0;
    }