/*Write a function that counts and returns the number of words in a provided string .
 (the words are separated by a space).*/

#include <stdio.h>
#include <stdbool.h>

//function to determine if a character is alphabetic
bool alphabetic (const char c)
{
    if ( (c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'))     
        return true;
    else
        return false;
}

// function to count the number of words in a string
int countWords (const char string[])
{
    int i, wordCount = 0;
    bool lookingForWord = true, alphabetic ( const char c);

    for ( i = 0; string[i] != '\0'; ++i)
        if (alphabetic(string[i]) )
        {
            if ( lookingForWord )
            {
                ++wordCount;
                lookingForWord = false;
            }
        }
        else
            lookingForWord = true;

    return wordCount;
}

int main ( void)
{
    const char text1[] = {"This was with the help of others."};
    const char text2[] = { "And this bit was me"};
    int countWords (const char string[]);

    printf( " %s - words = %i\n", text1, countWords (text1));
    printf( " %s - words = %i\n", text2, countWords (text2));

    return 0;
}