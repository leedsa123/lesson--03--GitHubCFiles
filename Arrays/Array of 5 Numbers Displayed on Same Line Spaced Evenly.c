/*Write a program that displays 1, 3 5, 7, 9 on same line spaced evenly*/

#include<stdio.h>
int main()
{
    
    int tab[] ={1,3,5,7,9};
    
    for (int i = 0; i<5;i++){
        
        printf("%d\t",tab[i]);
    }
}