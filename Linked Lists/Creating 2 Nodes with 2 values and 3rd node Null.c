//Linked List creating two nodes, one with valu 15 and one with value -2 and one with Null.

/**/
#include <stdio.h>
#include<stdlib.h>

typedef struct Node {
    int x;
    struct Node* next;
}Node;

int main (int argc, char* argv[]) {
    Node root;
    root.x = 15;
    root.next = malloc(sizeof(Node));
    root.next->x = -2;
    root.next->next = NULL;
    
    printf("First: %d\n", root.x);
    printf("Second: %d\n", root.next->x);
    
    free(root.next);
    

return 0;

