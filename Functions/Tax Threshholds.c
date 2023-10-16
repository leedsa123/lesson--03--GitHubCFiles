/*Write a function that returns for a provided income, the corresponding tax.
For the first 10000 euros, no tax
10% on the portion between 10000 and 30000
30% on the portion between 30000 and 60000
50% on the portion> 60000*/

#include <stdio.h>

double calculateTax(double income) {
    double tax = 0.0;

    const double threshold1 = 10000.0;
    const double threshold2 = 30000.0;
    const double threshold3 = 60000.0;

    const double rate1 = 0.0;  // 0% tax for the first 10000 euros
    const double rate2 = 0.10; // 10% tax on income between 10000 and 30000 euros
    const double rate3 = 0.30; // 30% tax on income between 30000 and 60000 euros
    const double rate4 = 0.50; // 50% tax on income above 60000 euros

    if (income <= threshold1) {
        tax = rate1 * income;
    } else if (income <= threshold2) {
        tax = rate1 * threshold1 + rate2 * (income - threshold1);
    } else if (income <= threshold3) {
        tax = rate1 * threshold1 + rate2 * (threshold2 - threshold1) + rate3 * (income - threshold2);
    } else {
        tax = rate1 * threshold1 + rate2 * (threshold2 - threshold1) + rate3 * (threshold3 - threshold2) + rate4 * (income - threshold3);
    }

    return tax;
}

int main() {
    double income;

    printf("Enter the income: ");
    scanf("%lf", &income);

    double tax = calculateTax(income);

    printf("The tax is %.2lf euros\n", tax);

    return 0;