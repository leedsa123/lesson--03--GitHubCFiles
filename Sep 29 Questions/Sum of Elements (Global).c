/*Global variables are stored in the data section which, unlike the stack, it 
does not grow or shrink — storage space for globals persists for the entire run of the program.

Consider an array of n elements stored in global memory.
Write a C function to find the sum of the elements in an array*/

#include <stdio.h>

int elementSum(int *arr , int n){
   int i=0,sum=0;
      for(i=0; i<n ; i++){
        sum = sum + arr[i];
}
   return sum;
}

int main(){
    
int array[10] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10};
int total = 0;
    
    total = elementSum(array,9);
	
    printf("\nThe sum of all of the array numbers is: %d",total);
	
    return 0;
}