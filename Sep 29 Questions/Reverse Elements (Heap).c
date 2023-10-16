/*The heap portion of memory is the part of a program's address space associated with dynamic memory allocation.
Consider an array of n elements stored in heap memory. Write a C function to reverse the order of elements.*/


#include <stdio.h>

void reverseArray(int *arr, int size)
{
    int *start = arr;          
    int *end = arr + size - 1; 

    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
}
}

int main()
{
    int numbers[] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original Array: ");
    
    for (int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
}
    printf("\n");

    reverseArray(numbers, size);
    printf("Reversed Array: ");
    
    for (int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
}
    printf("\n");

    return 0;
}