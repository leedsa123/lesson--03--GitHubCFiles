#include<stdio.h>
int main()
{
    
// ask user for five numbers

    float Value1, Value2, Value3, Value4, Value5;
    
    printf ("Enter numerical value and press enter \nValue1 \nValue2 \nValue3 \nValue4 \nValue5 \n");
    
    scanf ("%f %f %f %f %f",&Value1, &Value2, &Value3, &Value4, &Value5);
    
// user average of 5 numbers

float Sum1 = Value1 + Value2 + Value3 + Value4 + Value5;
float Mean1 = Sum1 / 5;

printf("The mean of your numbers is: %f", Mean1);

    return 0;
}