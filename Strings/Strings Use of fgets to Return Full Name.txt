/*String use of "fgets" to return full name*/

#include<stdio.h>

int main(){

char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);
    
    printf("Hello %s", fullName);
    
    
}