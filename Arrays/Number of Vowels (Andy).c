#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 
char message[]= "Andy is spending way too much time with this";

int nb=0;

for(int i=0;i<strlen(message);i++){
    if (message[i]=='a'||message[i]=='o'||message[i]=='i'||message[i]=='e'||message[i]=='u'||message[i]=='y')
    nb++;
}

printf("There is %d vowels in message\n",nb);

    return 0;
}