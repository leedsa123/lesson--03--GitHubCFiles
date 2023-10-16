/*Write a program that displays the length and width of a rectangle given the coordinates of 2 opposite 
corners on an orthonormal coordinate system: A (x1, y1) and B (x2, y2).
Note that there are 4 possible cases (see exercise in slides)*/
#include<stdio.h>


int main(){

    int xA = 2;
    int xB = 3;

    int yA = 5;
    int yB = 7;

    int dim1, dim2;
    int len, width;

    if(xA > xB)
    {
        dim1 = xA - xB;
    }
    else
    {
        dim1 = xB - xA;
    }
    if (yA > yB)
    {
        dim2 = yA - yB;
    }
    else
    {
        dim2 = yB - yA;
    }

    if (xA>yA) // if(dim1>dim2)
    {
        len = dim1;
        width = dim2;
    }
    else 
    {
        len = dim2;
        width = dim1;
    }

    printf("Length : %d and width = %d", len, width);


}