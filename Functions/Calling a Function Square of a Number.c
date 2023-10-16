#include<stdio.h>

void calculateSquare(int number) {

    int square = number * number; 
        
    printf("Square of %d is %d\n", number, square);
}    
    
    int main(){
        
        calculateSquare(8);

    return 0;
}