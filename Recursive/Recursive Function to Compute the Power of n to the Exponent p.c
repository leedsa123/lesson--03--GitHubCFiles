/*Create a recursive function to compute the power of n to the exponent p, where both n and p are given as inputs.*/

#include <stdio.h>

int power(int n, int p){

    if(p==1){
    return n;
}

    else{
        return n*power(n,p-1);
}

    
}



int main(void)
{
    
int n, p;

    printf("Print a number n, then exponent p:");
    scanf("%d%d", &n, &p);
    
        return 0;
}