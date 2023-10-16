//Swap two elements at positions 1 and 2 using pointers
int arr[] = {34, 5, 67, 4, 37, 23, 4, 8, 67, 10};

#include <stdio.h>
void swap12(float *ptr1, float *ptr2);
void main()
{

float x[10];
int j, n;

printf("How many Elements...\n");
scanf("%d", &n);

printf("Enter Elements one by one\n");

    for (j = 0; j < n; j++){
    scanf("%f", x + j);
}

/* Function call:Interchanging 1st element by 2nd */
    swap12(x + 0, x + 1);
    
    printf("\nResultant Array...\n");
    for (j = 0; j < n; j++){

    printf("X[%d] = %f\n", j, x[j]);
}
}

/* Function to swap the 3rd element with the 4th element in the array */
void swap12(float *ptr1, float *ptr2 ){
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}