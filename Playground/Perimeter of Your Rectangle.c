#include<stdio.h>
int main(void){
    
//Define variables

    float length, width;

//Tell user to input length and width of rectangle

    printf("Please enter the length of your rectangle:");
    scanf("%f", &length);
    
    printf("Please enter the width of your rectangle:");
    scanf("%f", &width);
    
//Calculate perimeter

    float sum = length + width;
    float P = sum * 2;
    
//Output results
    
    printf("The perimeter of your rectangle is %g",P);
   
    return 0;
}