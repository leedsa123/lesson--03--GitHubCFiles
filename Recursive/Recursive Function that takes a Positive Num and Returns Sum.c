/*Write a recursive function that takes a positive integer 'n' as input and 
returns the sum of numbers from 1 to 'n'*/

#include <stdio.h>

int sumRecursive(int n);

int main()
{
    
int n=10;
int result=sumRecursive(10);

    printf("%d", result);
    return 0;
}
int sumRecursive(int n){


    if(n==1){
    return 1;
    // 1;
    }else{
    
    return n+sumRecursive(n-1);
}
}