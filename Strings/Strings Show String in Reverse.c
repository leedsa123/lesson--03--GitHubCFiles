/*Write a program that takes a string as a parameter and displays the string in reverse.*/

#include<stdio.h>
#include<string.h>
int main(void){

char mystrg[60];
int leng, g;

// User inputs word (string) and fetch the input string from the user

    printf("Please insert the string you want to reverse: ");
    scanf( "%s", mystrg );

// Find length of string using strlen() function of string.h header file

leng = strlen(mystrg);

for(g = leng - 1; g >= 0; g--) {

     printf("%c", mystrg[g]);

}

return 0;

}