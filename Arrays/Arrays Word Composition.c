/*Write a program that displays the word resulting from the concatenation of the charaters of a char array.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

char tab[]={'A','n','d','y'};

//int tab[5]= {1,2,3,4,5};

int size= sizeof(tab)/sizeof(tab[0]); //Nb of items

    printf("Number of elements:%d\n",size);
    
    for(int i =0; i<size;i++)
    printf("%c",tab[i]);

return 0;

}

