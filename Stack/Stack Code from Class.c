#include <stdio.h>
#include <stdlib.h>
// single link list implementation of the stack 

struct node
{
    int data; 
    struct node* link; ; 
}*top = NULL; 

//push function
void push (int data); 
int pop();
int isEmpty();
int tos();
void print();

void main () 
{ 
    int choice, data;
    while(1)
    {
        printf("1. Push\n ");
        printf("2. Pop\n ");
        printf("3. Print Top of Stack (TOS)\n ");
        printf("4. Print all elements in stack\n ");
        printf("5. Quit\n ");
        printf("Please enter your choice:  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                printf("Enter the element to be pushed:  \n");
                scanf("%d",&data);
                push(data);
                break;
            case 2: 
                data = pop();
                printf("Deleted element is %d\n",data);
                break;
            case 3: 
                data = tos();
                printf("The top of the stack is %d\n", data);
                break;
            case 4: 
                print();
                break;
            case 5: 
                exit(0);
            default:
                printf("Invalid Input \n");
        }
    }
}

void push (int data) // adds to top of stack and reassigns top to 
{
    struct node* newNode; 
    newNode = malloc(sizeof(newNode));
    if(newNode == NULL) // returns null when reqeusted memeory cannot be located. 
    {
        printf("Stack Overflow");
        exit(1);// exit failure status 
    }
    newNode -> data = data; 
    newNode -> link = NULL; 
    newNode -> link = top;
    top = newNode;
}

int pop()
{
    struct node* temp = top; 
    if (isEmpty())
    {
        print("Stack Underflow");
        exit(1);
    }
    int val = temp -> data;
    top = top -> link;
    free(temp); 
    temp = NULL;
    return val; 
}
int isEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
int tos()
{
    if(isEmpty())
    {
        printf("Stack Underflow");
        exit(1);
    }
    return top -> data;
}

void print()
{
    struct node* temp = top; 
    printf("The stack elementsare; ");
    while (temp != NULL )
    {
        printf("%d ",temp -> data);
        temp = temp ->link;
    }
    printf("\n");
}