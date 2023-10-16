/*Write a function thats looks for the type of a provided character and displays the following :
''uppercase'' if it is a letter in uppercase
''lowercase '' if it is a letter in lowercase
''number '' if it is a number between 0 and 9
'' - '' for any other type of character*/

#include<stdio.h>

void charType(char);

int main(void){

char valueUser= '5';

charType(valueUser);

}
void charType(char input)
{
    if(input>='A' && input <= 'Z')
    {
    printf("The entry is an uppercase letter");
}
else if(input>='a' && input <='z')
{
    printf("The entry is a lowercase letter");
}
else if(input>='1' && input <='9')
{
    printf("The entry is a number");
}
else printf("-");
}