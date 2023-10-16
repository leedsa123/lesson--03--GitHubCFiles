/*The heap portion of memory is the part of a program's address space associated with dynamic memory allocation.
Consider an array of n elements stored in heap memory. Write a C function to swap two particular elements 
at positions pos1 and pos2*/

#include <stdio.h> 
 
void swap(int *a, int *b); 
 
int main() { 
  int arr[] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10}; 
  swap(&arr[0], &arr[1]); 
  printf("%d is now in position 1, and %d is in position 2",  
    arr[0], arr[1]); 
  return 0; 
} 
 
void swap(int *a, int *b) { 
  int t = *a; 
  *a = *b; 
  *b = t; 
} 