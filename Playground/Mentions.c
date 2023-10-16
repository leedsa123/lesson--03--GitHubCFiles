/*Write a program that displays the mention of a student based on his average. 
The results are:
'Failed' if the average is less than 10
'Fairly good' if the average is between 12 and 14 (not included)
'Good' if the average is between 14 and 16 (not included)
'Very good' if the average is between 16 and 20 (included)
'-' for any other value"*/
#include <stdio.h>
#include <stdbool.h>

int main()
{

    int average = 22;

    if (average >= 0 && average < 10)
    {
        printf("Failed");
    }
    else if (average >= 10 && average < 14)
    {
        printf("Fairly good");
    }
    else if (average >= 14 && average < 16)
    {
        printf("Good");
    }
    else if (average >= 16 && average <= 20)
    {
        printf("Very good");
    }
    else
    {
        printf("-");
    }

    return 0;
}