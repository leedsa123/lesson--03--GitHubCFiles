/*/*The heap portion of memory is the part of a program's address space associated with dynamic memory allocation.
Consider an array of elements stored in heap memory and find the largest element in the array*/

#include <stdio.h>
#include <stdlib.h>
 
void findLargest(int* arr, int N)
{
int i;
 
    for (i = 1; i < N; i++) {
        if (*arr < *(arr + i)) {
            *arr = *(arr + i);
}
}
        printf("%d ", *arr);
}
 
int main(){
    
    int i, N = 10;
 
    int* arr;
 
    arr = (int*)calloc(N, sizeof(int));
 
    if (arr == NULL){
        printf("No memory allocated");
        exit(0);
}
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
 
    findLargest(arr, N);
    
    return 0;
}