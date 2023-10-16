/*Write a program that asks the user for a positive integer and then prints a pattern of asterisks in the shape of a right-angled triangle. 
The number of rows in the triangle is determined by the user's input.
Example : nbRows=5

* 
* * 
* * * 
* * * * 
* * * * * */

#include<stdio.h>
 
int main(){
    int i,j,rows;

// Ask user for number of rows
        printf("Enter the number of rows\n");
        scanf("%d", &rows);
 
    for(i = 0; i < rows; i++){
/* Prints one row of triangle */
    
    for(j = 0; j <= i; ++j){
           printf("* ");
}
/* move to next row */
        printf("\n");
}
    return 0;
}