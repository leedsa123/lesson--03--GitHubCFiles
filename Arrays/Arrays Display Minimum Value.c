//String concatenation.

#include<stdio.h>
#include<stdlib.h>

void displayMatrix(int nbLines, int nbColumns, int m[][nbColumns]);

int main(){

    int mat[3][4];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
    
// cell[i][j]
    mat[i][j] = i + j;
    
            }
    }

displayMatrix(3, 4, mat);

    return 0;
}


    void displayMatrix(int nbLines, int nbColumns, int m[nbLines][nbColumns])
    
    {
        
    for (int i = 0; i < nbLines; i++){    
        for (int j = 0; j < nbColumns; j++){
    
        printf("%d", m[i][j]);
        }
        printf("\n");
        }
    
    } 