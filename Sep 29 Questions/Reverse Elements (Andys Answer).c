//Find the sum of the elements stored in global memory in an array

//Initialize array     
int arr[] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10};     
int sum = 0;  

#include <stdio.h>    
int main()    
{    
//Calculate length of array arr    
int length = sizeof(arr)/sizeof(arr[0]);    
        
//Loop through the array to calculate sum of all elements    
for (int i = 0; i < length; i++) {     
   sum = sum + arr[i];    
}      
    printf("Sum of all the elements of the array: %d", sum);    
    return 0;    
}