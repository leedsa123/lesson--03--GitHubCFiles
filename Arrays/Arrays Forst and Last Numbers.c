/*Write a program in which you declare a string (and initialize it) and you display on the screen:

The string's size
The first character
The last character
The position of the character 'c' if exists.*/

#include <stdio.h> 
#include<string.h> 
 
int main(void)  
{ 
	
char c[100];
	printf("Print characters: ");
	scanf("%s",c); 
/*strlen(c) gives total length of string . string index starts from 0 
	last index of character is strlen(c)-1*/ 
	
int l = strlen(c)-1; 
	printf("The first and last characters are: %c %c", c[0], c[l]); 
	return 0; 
}