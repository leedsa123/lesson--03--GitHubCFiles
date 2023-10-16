/*Write a recursive function that calculates the nth number in the Fibonacci sequence. 
The Fibonacci sequence is defined as follows: the first two numbers are 0 and 1, and each 
subsequent number is the sum of the two preceding ones.
The function should take an integer 'n' as input and return the nth Fibonacci number.
Example : fibonacci(0) = 0, fibonacci(1) = 1,  fibonacci(2) = 1
fibonacci(3) = 2, fibonacci(4) = 3,  fibonacci(5) = 5, fibonacci(6) = 8, etc..*/

#include <stdio.h>

int fibonacci(int n)
{
    if(n == 1)  
    { 
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
        else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    }
 
 
 
int main()   
{
int nbr = 5;
    
    printf("fibonacci(%d) =%d\n", nbr, fibonacci(nbr));
}