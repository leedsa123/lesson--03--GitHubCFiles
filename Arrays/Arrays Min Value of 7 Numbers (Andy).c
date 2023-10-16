/*Write a program that displays the minimum value among the elements of an array of integers.*/

#include <stdio.h>
int main()
{
  
  int array[100], size, c, location = 0;

  printf("Enter number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < size; c++)
    if (array[c] < array[location])
      location = c;

  printf("The minimum element is located at %d with a value of %d.\n", location+1, array[location]);
  return 0;
}