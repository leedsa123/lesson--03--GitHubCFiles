/*Global variables are stored in the data section which, unlike the stack, it 
does not grow or shrink — storage space for globals persists for the entire run of the program.

Consider an array of n elements stored in global memory.
Write a C function that reverses the elements of an array.*/

#include <stdio.h> 
 
void reverse_list(int arr[], int size) { 
int temp, i; 
   
    for (i = 0; i < size/2; i++) { 
        temp = arr[i]; 
        arr[i] = arr[size-i-1]; 
        arr[size-i-1] = temp; 
} 
} 
 
int main() { 
   
int arr[] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10}; 
   
int size = sizeof(arr)/sizeof(arr[0]); 
   
int i; 
 
   for (i = 0; i < size; i++) 

   reverse_list(arr, size); 
 
   printf("\nReversed list: "); 
   
   for (i = 0; i < size; i++) { 
      printf("%d ", arr[i]); 
} 
 
   return 0; 
}