/*Strcmp() :Compare Strings
● Examples: */

#include <stdio.h>
int main() {
char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2)); // Returns 0 (the strings are equal)

// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3)); // Returns -4 (the strings are not equal)

// Compare apple to banana
int result = strcmp("apple", "banana"); // returns -1
 
 return 0;
}