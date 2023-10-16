/*Develop a program that determines whether a given integer is odd or even. 
The program should:
prompt the user to input an integer
perform the odd or even check,
display a message indicating whether the number is odd or even*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 5;

    if (n % 2 == 0)
        printf("%d is even", n);
    else
        printf("%d is odd", n);

    return 0;
}