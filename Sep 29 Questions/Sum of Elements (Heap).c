/*The heap portion of memory is the part of a program's address space associated with dynamic memory allocation.
Consider an array of n elements stored in heap memory. Write a C function to find the sum of the elements.*/

#include <stdio.h>
 
void main()
{
	static int array[10] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10};
	int sum;
 
  	int addnum(int *ptr);
     	sum = addnum(array);
 
        printf("Sum of all array elements = %5d\n", sum);
}
 
int addnum(int *ptr){
	int index, total = 0;
	for (index = 0; index < 5; index++){
		total += *(ptr + index);
}
	return(total);
 
}
