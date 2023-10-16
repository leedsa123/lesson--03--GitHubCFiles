#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
int main(){

char welcome[]="Hello World!";
int stringSize1;
int stringSize2;
char firstCharacter;
char lastCharacter;
int positionCharacter;

    stringSize1 = (sizeof(welcome)/sizeof(welcome[0]))-1;
    printf("%d\n",stringSize1);
    
    stringSize2 = strlen("Hello World!");
    printf("%d\n",stringSize2);

    firstCharacter = welcome[0];
    printf("%c\n", firstCharacter);
    
    for(int i=0; i<stringSize2; i++){
        if(welcome[i] =='c'){
            positionCharacter = i;
    printf("The position of character searched is %d",positionCharacter);
    }
        else if((i == (stringSize2-1)) && (welcome[i]!='W')){
    printf("The character searched is not present");

    }
    }

return 0;

}

