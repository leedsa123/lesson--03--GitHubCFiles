/*Write a program concatenates two arrays of integers in a third one.*/
#include<stdio.h>
#include<stdlib.h>

void array(int**,int);
void ini(int**,int);
void display(int **,int);
    int main(){
        
    int *a1,*a2,*a3,s1,s2,i,j;
    printf("Enter Size of Array 1\n");
    scanf("%d",&s1);
    
    printf("Enter Size of Array 2\n");
    scanf("%d",&s2);
    
    ini(&a1,s1);
    ini(&a2,s2);
    ini(&a3,s1+s2);
    
    printf("Enter Elements of Array 1\n");
    
    array(&a1,s1);
    printf("Array 1:\n");
    
    display(&a1,s1);
    printf("Enter Elements of Array 2\n");
    
    array(&a2,s2);
    printf("Array 2:\n");
    
    display(&a2,s2);
        for(i=0;i<s1;i++)
        {
            a3[i]=a1[i];
        }
        for(i=0,j=s1;i<s2&&j<s1+s2;i++,j++)
        {
            a3[j]=a2[i];
        }
        printf("Merged Array:\n");
        
    display(&a3,s1+s2);
        return 0;
    
        
    }
    void ini(int **a,int s){
        *a=(int*)calloc(s,sizeof(int));
    }
    
    void array(int **a,int s){
    int i;
        for(i=0;i<s;i++)
        {
            printf("Enter Element at position %d\n",i+1);
            scanf("%d",&a[i]);
        }
    }
    void display(int **a,int s){
    int i;
        for(i=0;i<s;i++)
        {
            if(i==s-1)
            printf("%d\n",a[i]);
            else
            printf("%d\t",a[i]);
        }
    }