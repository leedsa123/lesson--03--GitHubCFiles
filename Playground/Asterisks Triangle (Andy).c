/*Write a program in C to display a pattern like a right angle triangle using asterisks.*/

#include <stdio.h>
void main()
{
   int i,j,rows;
   
    printf("Input number of rows : ");
    scanf("%d",&rows);

/*Explanation*/   
        for(i=1;i<=rows;i++)
   {
        for(j=1;j<=i;j++)

/*Display asterisks*/	   
	printf("*");

/*Display asterisks one line at a time*/	
	printf("\n");
       }
}
/*In the above for loop, the variable i is initialized to 1, and the loop will continue as long as i is less 
than or equal to the value of variable 'rows'. In each iteration of the outer loop, another loop is started 
with variable j, initialized to 1, and it will continue as long as j is less than or equal to the value of i.
In each iteration of the inner loop, the printf() function will print an asterisk symbol (*) to the console. 
This symbol will be printed i times, as the value of i is increasing by 1 in each iteration of the outer loop.
After the inner loop completes, the outer loop will print a newline character (\n) to create a new line.
Finally, the outer loop will increment the value of i by 1, and the process will repeat until the 
condition i<=rows is no longer true.*/