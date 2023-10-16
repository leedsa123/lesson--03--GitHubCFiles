/*Write a C program that takes an array of integers and uses pointers to display the elements of the array. 
The program should do the following:
Define an integer array with a fixed size (e.g., 5 elements) and fill it with values.
Use a pointer to iterate through the array and print each element.
Display the elements of the array in their original order.*/

#include <stdio.h>

int main()
{
    
    int arr[] = {10, 20, 30, 40, 15};
    int *ptr = arr;

    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size;i++){
    
    printf("%d ", *ptr);
    ptr++;
}
 
}