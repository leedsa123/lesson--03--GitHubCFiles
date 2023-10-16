/*Write a C program that dynamically allocates an array of integers using pointers. 
Prompt the user to enter the size of the array, allocate memory for it, and then ask the user to input values for each element. Finally, display the contents of the array. 
If you use knowledgeable, hardcode the values of size and array elements.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int *arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    
        printf("Enter %d integers:\n", size);
        for (int i = 0; i < size; i++){
            scanf("%d", &arr[i]);
    }
    
        printf("Array elements:\n");
        for(int i = 0; i < size; i++){
        
        printf("%d", arr[i]); 
    }
        free(arr);
        
        return 0;
        
    }