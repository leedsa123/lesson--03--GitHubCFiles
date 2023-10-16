/*Write a program that checks whether an array of integers is correctly sorted*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{

int tab[] = {5, 3, 4, 5, 6, 7, 8, 9, 10};

int size = sizeof(tab)/sizeof(tab[0]);
bool sorted = true;

    for (int i = 0; i < size-1; i++){
    if (tab[i] > tab[i + 1]){
    
    printf("The array is not sorted\n");
sorted = false;
    break;
}
}
    if (sorted){    
        printf("The array is sorted\n");
}

    return 0;
    
}