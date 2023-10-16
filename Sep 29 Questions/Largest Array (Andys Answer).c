// Find the largest element stored in global memory in an array.
//Initialize array stored in global memeory    

int arr[] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10};  

#include <stdio.h>    

//Initialize array stored in global memeory    

int main()    
{    

//Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
//Initialize max with first element of array.    
    int max = arr[0];    
        
//Loop through the array    
    for (int i = 0; i < length; i++) {     

//Compare elements of array with max    
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("The largest element in the array is: %d\n", max);    
    return 0;    
} 