*Strcmp() :Compare Strings
However, when you compare string variables using strcmp(), it 
returns a value that represents the difference in lexicographical 
order between the two strings. 
● This difference value can be positive, negative, or zero, 
depending on the relationship between the strings.*/

include<stdio.h>
#include<string.h>
int main(){
 
 char str1[]="hi";
 char str2[]="hello";
 int result = strcmp(str2, str1); 
 printf("%d",result); //return -4
}