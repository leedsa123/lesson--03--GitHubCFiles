/*Write the function that inserts an integer n in its right place in a sorted array tab.*/

#include<stdio.h>

void insert(int a[], int size, int element)
{size++;
  int flag=0;
  for(int i=0;i<size;i++)
  { 
    if(a[i]>element){
        flag++;
      for(int j=size; j>=i; j--)
    a[j] = a[j-1];
      a[i] = element;
      break;
}
  }
    if (flag == 0)
        a[size-1] = element;
        for(int i=0;i<size;i++)
    printf(" %d", a[i]);
}

int main(){
  
    printf("Insertion of elements in array \n");
  
    int arr[100], size, element;
    printf("Enter the size of array:- ");
  
    scanf("%d",&size);
    printf("\nEnter the array (Sorted Array!):- ");
  
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  
    printf("\nEnter element you want to insert:- ");
    scanf("%d", &element);

    insert(arr, size, element);
  
    return 0; 
} 