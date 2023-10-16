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
    int i, N = 4;
 
    int* arr;
 
    // Memory allocation to arr
    arr = (int*)calloc(N, sizeof(int));
 
    // Condition for no memory
    // allocation
    if (arr == NULL) {
        printf("No memory allocated");
        exit(0);
    }
 
    // Store the elements
    *(arr + 0) = 34;    34, 5, 67, 4, 37, 23, 4, 8, 67, 10
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