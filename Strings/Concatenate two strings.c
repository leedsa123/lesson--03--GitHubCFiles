/*1. Create a variable str1 container “hello chicken”
2. Create a variable str2 containing “hello hooman”
3. Use strcat to concatenate str2 and str1. Display the result. */


#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Hello chicken";
    char str2[] = "Hello hooman";
    
    strcat(str1, str2);
    
    printf("Concatenated str2 and str1 strings: %s\n", str1);
    
    return 0;

}