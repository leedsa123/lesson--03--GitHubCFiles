/*Create a program that takes a character as input and determines its type, displaying one of the following:

'uppercase' if it is an uppercase letter
'lowercase' if it is a lowercase letter
'number' if it is a digit between 0 and 9
'-' for any other type of character"*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c = '2';

    if (c >= 'A' && c <= 'Z')
        printf("%c is a capital letter", c);
    else if (c >= 'a' && c <= 'z')
    {
        printf("%c is a small letter", c);
    }
    else if (c >= '0' && c <= '9')
        printf("%c is a digit", c);

    return 0;
}