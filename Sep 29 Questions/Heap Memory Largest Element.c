/*Consider an array of elements stored in heap memory
Find the largest element in the array*/

#include <stdio.h>
#include <stdlib.h>
 
// Function to find the largest element
// using dynamic memory allocation
void findLargest(int* arr, int N)
{
int i;
 
// Traverse the array arr[]
    for (i = 1; i < N; i++) {
// Update the largest element
        if (*arr < *(arr + i)) {
            *arr = *(arr + i);
}
}
 
// Print the largest number
        printf("%d ", *arr);
}
 
// Driver Code
int main()
{
    int i, N = 10;
 
    int* arr;
 
// Memory allocation to arr
    arr = (int*)calloc(N, sizeof(int));
 
// Condition for no memory
// allocation
    if (arr == NULL){
        printf("No memory allocated");
        exit(0);
}
 
// Store the elements
    *(arr + 0) = 34;
    *(arr + 1) = 5;
    *(arr + 2) = 67;
    *(arr + 3) = 4;
    *(arr + 4) = 37;
    *(arr + 5) = 23;
    *(arr + 6) = 4;
    *(arr + 7) = 8;
    *(arr + 8) = 67;
    *(arr + 9) = 10;
 
// Function Call
    findLargest(arr, N);
    return 0;
}