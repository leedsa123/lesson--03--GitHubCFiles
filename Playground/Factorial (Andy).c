/*Write a program that calculates and displays the factorial of a provided integer.
Ex : Factorial of 5 = 5! = 5*4*3*2*1 */

#include<stdio.h>

int main(){

    int x, fact=1, n;

    printf("Enter a number to find factorial: ");

    scanf("%d",&n); 

    for(x=1;x<=n;x++)

        fact=fact*x; 

    printf("Factorial of %d is: %d",n,fact);

    return 0;

}