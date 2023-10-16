/*Write a function to remove duplicates from a given array of integers: If an element exists at a lower index, remove it.
Hint: Use intermediate arrays.*/

#include<stdio.h>
#include<stdlib.h>
int main(){

int a[50],i,j,k, count = 0, dup[50], number;
//Ask user to enter size of array

        printf("Enter size of the array");
        scanf("%d",&number);

//Ask user for numbers in array   
        printf("Enter the numbers in the array:");
        
   for(i=0;i<number;i++){
        scanf("%d",&a[i]);
        
dup[i] = -1;
}

//Ask user to input numbers   
        printf("Entered element are: ");
   
   for(i=0;i<number;i++){
        printf("%d ",a[i]);
   
}
   for(i=0;i<number;i++){
   for(j = i+1; j < number; j++){
   
   if(a[i] == a[j]){
   for(k = j; k <number; k++){
   a[k] = a[k+1];
}
   j--;
   number--;
}
}
}
// Outout user result 
        printf("After deleting the duplicate number the Array is now:");
   
   for(i=0;i<number;i++){
        printf("%d ",a[i]);
   }
}