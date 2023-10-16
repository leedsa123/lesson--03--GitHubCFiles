/*Write a program that prints the values of hours, minutes, and seconds from a provided time in seconds*/

#include<stdio.h>
#include<stdlib.h>

int main(){
float f= 4.23;

int n=(int)f;
float dec= f-n;

printf("the int part of %.2f is:%d and the decimal part is:%.2f",f,n,dec);

return 0;
}