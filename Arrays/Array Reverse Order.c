/*Write a program that displays the elements of an array of integers in the reverse order.
Example: if the array contains {1,2,3,4,5}, we display 5,4,3,2,1*/

#include<stdio.h>

int main(void){

int intArray[]   = {1, 2, 3, 4, 5};
    
    /*Calculation*/
        for (int i= (sizeof(intArray)/sizeof(intArray[0]))-1; i>=0; i--){
    
        printf("%d",intArray[i]);
    
        if(i!=0) //Do not pprint the last comma
        printf(",");
    
}
}