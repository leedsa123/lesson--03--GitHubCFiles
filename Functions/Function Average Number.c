#include <stdio.h>

double average_two_numbers(double n1, double n2){
    return (n1 + n2) / 2;
}

int main(){
    double number1 = 8.5;
    double number2 = 7.5;
    
    double v3 = average_two_numbers(number1, number2);
    printf("The average of %2lf and %2lf is : %2lf\n", number1, number2, v3);
    
    return 0;
}