/*Write a program that displays the first position of an integer 'n' in an array of integers 'tab'. 
If the element does not exist, it displays -1.*/

#include <stdio.h>    
int main()
{

int arr[] = {12, 32, 14, 53};

// Get total number of elements in array
int size = sizeof(arr) / sizeof(arr[0]);
    if(size > 0)
    {
// Get first element of array
        int firstElem = arr[0];
        printf("First Element of Array is: %d \n", firstElem);
    }
    else
    {
        printf("-1 \n");
    }
    return 0;
}