#include<stdio.h>

void addNumbers(int number1, int number2){

    int sum = number1 + number2; 
        
    printf("Sum of %d and %d is %d\n", number1, number2, sum);
}    
    
    int main(){
        
        addNumbers(8, 9);

    return 0;
}