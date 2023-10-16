/*Global variables are stored in the data section which, unlike the stack, it 
does not grow or shrink — storage space for globals persists for the entire run of the program.

Consider an array of n elements stored in global memory.
Write a C function to find the largest element in the array.*/

#include<stdio.h>  

int maxarray(int arr[],int size){    
int max=arr[0];    
int i=0;    

    for(i=1;i<size;i++){    
        if(max<arr[i]){    
            max=arr[i];    
}    
}    
    return max;
}  
    
int main(){      

int i=0,max=0;    
int numbers[]={34, 5, 67, 4, 37, 23, 4, 8, 67, 10};   
  
max=maxarray(numbers,10);   
    
    printf("Largest number in the array is: %d \n",max);    
    
    return 0;  
} 