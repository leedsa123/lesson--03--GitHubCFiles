/*Create a program that computes the mean value of a set of five numbers entered by the user. 
The program should :
prompt the user to input five numerical values
calculate their mean
display the result as the mean value.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1,n2,n3;
    /*printf("Give me a first number\n");
    scanf("%d",&n1);
    printf("give me a second number\n");
    scanf("%d",&n2);
    printf("Give me a third number\n");
    scanf("%d",&n3);*/

    printf("Give me 3 numbers\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    float mean= (float)(n1+n2+n3)/3;
    printf("The mean is:%f\n",mean);

    return 0;