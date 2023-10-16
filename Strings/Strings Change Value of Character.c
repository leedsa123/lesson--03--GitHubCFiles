/*To change the value of a specific character in a string, refer 
to the index number, and use single quotes:*/

#include <stdio.h>
int main() {
 char greetings[] = "Hello World!";
 greetings[0] = 'J';
 printf("%s", greetings);
 return 0;
}