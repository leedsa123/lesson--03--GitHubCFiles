/*Write a recursive method: 
static void descend(int n) 
that displays integers from 1 to n in descending order.
Example: if n=5 -→ display  5 4 3 2 1*/

#include <stdio.h>

void descendRecursive(int pNb)
{
    if (pNb == 0){
        return;
    }
    else{
        printf("%d", pNb);
        descendRecursive(pNb-1);
        
            }
}

int main()
{
    descendRecursive(5);

    return 0;
}