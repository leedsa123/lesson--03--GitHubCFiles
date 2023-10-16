/*Write a program that displays the multiplication table of a provided integer.
Example: For n = 2, we display:
2 x 0 = 0
2 x 1 = 2
Etc ...*/

#include <stdio.h>
void main()
{
   int j;
   int n;
   
   printf("Input the number (Table to be calculated) : ");
   scanf("%d",&n);
   
   printf("\n");
   
   for(j=1;j<=10;j++)
   {
     printf("%d X %d = %d \n",n,j,n*j);
   }
} 