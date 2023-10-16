//write the c code to reverse a stack using call reference.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure for the stack
struct Stack {
    int data[MAX_SIZE];
    int top;
};

// Function to initialize an empty stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->data[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        exit(1);
    }
    return stack->data[stack->top--];
}

// Function to insert an element at the bottom of the stack
void insertAtBottom(struct Stack *stack, int value) {
    if (isEmpty(stack)) {
        push(stack, value);
        return;
    }

    int temp = pop(stack);
    insertAtBottom(stack, value);
    push(stack, temp);
}

// Function to reverse the stack using call by reference
void reverseStack(struct Stack *stack) {
    if (isEmpty(stack)) {
        return; // Stack is already empty
    }

    int temp = pop(stack);
    reverseStack(stack);
    insertAtBottom(stack, temp);
}

// Function to print the elements of the stack
void printStack(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack contents: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initialize(&stack);

    // Push elements onto the stack
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);

    // Print the original stack
    printf("Original ");
    printStack(&stack);

    // Reverse the stack
    reverseStack(&stack);

    // Print the reversed stack
    printf("Reversed ");
    printStack(&stack);

    return 0;
}
