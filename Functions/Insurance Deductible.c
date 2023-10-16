#include <stdio.h>

double calculateDeductible(double damageAmount) {
    const double minDeductible = 10.0;  
    const double maxDeductible = 500.0; 
    const double deductibleRate = 0.10; 

        double deductible = damageAmount * deductibleRate;

        if (deductible < minDeductible) {
        deductible = minDeductible;
    }   else if (deductible > maxDeductible) {
        deductible = maxDeductible;
    }

    return deductible;
}

int main() {
    double damageAmount;

    printf("Enter the amount of damage: ");
    scanf("%lf", &damageAmount);

    double deductible = calculateDeductible(damageAmount);

    printf("The deductible is %.2lf euros\n", deductible);

    return 0;
}
