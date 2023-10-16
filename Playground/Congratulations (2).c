/*Congratulate a student based on gender and average grade*/

#include<stdio.h>

int main(void)
{
    
char g;
float avg;

//User input gender
    printf("Enter your gender as 'm' for male and 'f' for female: ");
    scanf("%c", &g);
//User input age    
    printf("Enter your age from 0 - 100: ");
    scanf("%f", &avg);

// Calculate    
    if(avg<10){
    printf(":-(");
    
    } else if (g == 'm'){
        printf("Congratulations young man :-)");
        
    } else if (g == 'f'){
        printf("Congratulation miss :-)");
    }
    
return 0;
}