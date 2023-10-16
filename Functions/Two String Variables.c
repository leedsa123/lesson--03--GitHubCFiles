/*1. Create a variable str1 container “hello chicken”
2. Create a variable str2 containing “hello hooman”
3. use strlen to compute the str length, store the result in a variable r1
4. use strcmp on str1 and str2 and store the result in a variable r2
5. Display r1 and r2
 */

#include <stdio.h>
#include <string.h>
int main(){
    
    // Create first variable
    char str1[] = "Hello chicken";
    
    // Create 2nd variable
    char str2[] = "Hello hooman";
    
    //Compute string length
    size_t r1 = strlen(str1);
    
    //Compare str1 and str2
    int r2 = strcmp(str1, str2);
    
    printf("String length of str1: %zu\n", r1);
    printf("Comparison result of str1 and str2: %d\n", r2);
    
    return 0;
}