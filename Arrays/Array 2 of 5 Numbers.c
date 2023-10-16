/*Write a program that displays only 1 * 3*/

#include<stdio.h>
int main()
{
    
    /*int tab[] ={1,3,5,7,9};*/
    
    int tab[5];
    tab[0]=1;
    tab[1]=3;
    
    for(int i=0; i<5;i++){
        
        printf("%d\t",tab[i]);
    }
}
