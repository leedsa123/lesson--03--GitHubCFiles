/*Get a string entered by the user. Note: When working with strings in scanf(), you must specify 
the size of the string/array and you don't have to use the 
reference operator (&).*/

#include<stdio.h>
#include<string.h>
int main(){
 
// Create a string
char firstName[30];
// Ask the user to input some text
printf("Enter your first name: \n");
// Get and save the text
scanf("%s", firstName);
// Output the text
printf("Hello %s", firstName);

}