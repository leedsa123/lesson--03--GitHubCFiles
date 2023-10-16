/*Write a program that transposes a provided 2D array.
The transpose of an array tab[N][M] is another array trans[M][N] where each element of indices (i, j) 
of trans is equal to the element of indices (j, i) of tab.*/


#include<stdio.h>
#include<stdlib.h>
int main()
{

int mat[2][3]={{1,2,3},{4,5,6}};

    for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
    printf("%d",mat[i][j]);
}
    printf("\n");
}

int trans[3][2];
    for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
    
    trans[i][j]=mat[j][i];

}
    printf("\n");
}

    for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){

    printf("%d",trans[i][j]);
}
    printf("\n");
}
    return 0;
}