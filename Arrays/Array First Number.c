/*Write a program that displays the first position of an integer 'n' in an array of integers 'tab'. 
If the element does not exist, it displays -1.*/

#include <stdio.h>    
int main(){
    
    int arr[] = {35, 67, 22, 33, 87, 14};
    
// Get total of numbers 
    int size = sizeof(arr) / sizeof(arr[0]);
    if(size > 0)
    {

// Get first number
        int firstElem = arr[0];
        printf("First Number of this Array is: %d \n", firstElem);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
    
    
    