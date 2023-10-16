#include<stdio.h>
int main (void){

    float damage_amount;
    float deductible;

    damage_amount = 899;

    float possible_deductible = 0.1 * damage_amount;
    
    if (possible_deductible <= 10){
        deductible = 10;

    }   else if (possible_deductible >= 500){
        deductible = 500;
    }   else {deductible = possible_deductible;
    }
        printf("The deductible taken by the insurance company is %.2f euros\n",deductible);
}