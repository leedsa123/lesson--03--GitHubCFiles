/*fgets Function:
To deal with this problem, we often use the fgets() function to 
read a line of text. Note that you must include the following 
arguments: the name of the string variable, sizeof(string_name), 
and stdin:
*/

#include<stdio.h>
#include<string.h>
int main(){
 
char fullName[30];
printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), 
stdin);
printf("Hello %s", fullName);
// Type your full name: Andy Leeds
// Hello Andy Leeds


}
