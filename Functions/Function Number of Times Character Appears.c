/*Write a function that counts and returns the number of vowels in a provided string.*/

#include <stdio.h>
#include <string.h>

int main(void){
    
    printf("\n");

char string[100];

    printf("Please write a sentence:\n");
    fgets(string,sizeof(string), stdin);

char letter;

    printf("\nWhich letter do you want to choose to see how many times in your sentance?\n");
    scanf("
    counter++c",&letter);

int counter = 0;
int length = strlen(string);

    for(int i = 0 ; i < length ; i++){
        if(letter == string[i]){
        counter++;
        }
    }

    printf("\nThe letter %c appears %d times in this sentence.\n\n,letter,counter);

}