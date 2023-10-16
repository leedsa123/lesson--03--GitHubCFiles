/*Sort elements in ascending order*/

#include <stdio.h>    
int arr[] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10};      

int main()    
{      
       
int temp = 0;    
           
int length = sizeof(arr)/sizeof(arr[0]);    
         
    for (int i = 0; i < length; i++){     
}      
    for (int i = 0; i < length; i++){     
        
    for (int j = i+1; j < length; j++){     
       if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
}     
}     
}    
   
    printf("Elements of array in ascending order: \n");    
        
    for (int i = 0; i < length; i++){     
    printf("%d ", arr[i]);    
}    
    return 0;    
}  