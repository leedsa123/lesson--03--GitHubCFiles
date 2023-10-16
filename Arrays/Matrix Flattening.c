/*Write a program that displays the matrix resulting from flattening a 
provided 2D array (concatenating the elements of its rows)*/


#include<stdio.h>
#include<stdlib.h>
int main()
{

int mat[2][3]={{1,2,3},{4,5,6}};
int tab[6];
int k=0;

    for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
    tab[k] = mat[i][j];
    k++;
    }
}

    for(int i=0; i<k; i++){ //Use i as the loop counter
    printf("%d", tab[i]);


}
    return 0;
}