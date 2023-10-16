#include <stdio.h>
#include <string.h>

int main(void){
    
char string[] = "Hello World";
char vowels[] = "aeiouy";

int counter = 0;

int str_length = strlen(string);
int vowel_length = strlen(vowels);

for (int i = 0; i < str_length ; i++){
    for (int j = 0; j < vowel_length ; j++){
    
        if (vowels[j] == string[i]){
            counter++;
                break;
        }        
    }
}

    
    printf("There are %d vowels in this sentance,counter");
}