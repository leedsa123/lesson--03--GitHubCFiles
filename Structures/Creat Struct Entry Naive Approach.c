/*We want to store a collection of data using key / value. 
To start we will do a naive approch using Linked lists. 
In order to do that we will use a struct named Entry with three members : 
char* key
float value
Entry* next
1. Create the struct Entry
2. In the test_main function, create a Linked List with two node. Specify the values
and the key of both nodes and connect node 1 to node 2. */


#include <stdio.h>

struct Entry {
    char *key;
    float value;
    struct Entry* next;
};

int main(){
    //Create an example entry
    struct Entry entry1;
    entry1.key = "example_key";
    entry1.value = 42;
    entry1.next = NULL;
    
    //Access and print the values
    printf("Key: %s\n", entry1.key);
    printf("Value : %.2f\n", entry1.value);

return 0;