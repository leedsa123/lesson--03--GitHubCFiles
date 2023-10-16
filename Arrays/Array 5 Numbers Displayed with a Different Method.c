/*Write a program that displays all tab numbers a different way...*/

#include<stdio.h>
int main()
{
    
    int tab[] ={1,3,5,7,9};
    
    //const int N-5
    // int tab [N]
    
    
    tab[0]=1;
    tab[1]=3;
    tab[2]=5;
    
    int nbElements= sizeof(tab)/sizeof(int);
    
    for(int i=0; i<nbElements;i++){
        
        printf("%d\t",tab[i]);
    }
}

