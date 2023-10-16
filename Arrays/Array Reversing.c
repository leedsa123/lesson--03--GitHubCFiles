Array Reversing

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 
//char message[]="What you up to Andy? backwards"
char message[]= "What you up to Andy?";


for(int i=strlen(message)-1;i>=0;i--){
   printf("%c",message[i]);
}

    return 0;
}