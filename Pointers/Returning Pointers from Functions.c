/*Returning Pointers from Functions*/

#include <stdio.h>
#include <stdlib.h>
int* createIntArray(intsize) {
 int* arr = (int*)malloc(size * sizeof(int));
 if (arr == NULL) {
 printf("Memory allocation failed.\n");
 return NULL; // Return NULL to indicate failure
 }
 for (inti = 0; i < size; i++) {
 arr[i] = i * 2; // Example: Initializewith even numbers
 }
 return arr; // Return the pointer to the dynamically allocated array
}
intmain() {
 int* myArray;
 intsize = 5;
 myArray = createIntArray(size);
 if (myArray != NULL) {
 printf("Array elements: ");
 for (inti = 0; i < size; i++) {
 printf("%d ", myArray[i]);
 }
 printf("\n");
 free(myArray);
 }
 return 0;}
