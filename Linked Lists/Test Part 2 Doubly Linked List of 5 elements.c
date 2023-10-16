/*Write a C code to:
Create a Doubly Linked List of 5 elements where data is of type integer.
Search for a particular element given by user and return its position in the list.
Delete a particular element with position given by user.
Sort the elements of the list by ascending order.
Transform the list into a Circular Doubly Linked List????.*/

#include <stdio.h>
#include <stdlib.h>

// Structure for a doubly linked list node
struct node {
    int data;
    struct node* prev;
    struct node* next;
};

// Function create node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function insert node at end
void insertEnd(struct node** head, int data) {
    struct node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

// Function display elements
void displayList(struct node* head) {
    struct node* current = head;
    printf("Doubly Linked List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct node* myList = NULL;
    int i;

// Create a List with 5 elements (1 -5)
    for (i = 1; i <= 5; i++) {
        insertEnd(&myList, i * 1);
    }

// Display list
    displayList(myList);

    return 0;
}


/*
Other functions required in the code...

struct node* search(struct Node* head, int target) {
    struct node* current = head;
    while (current != NULL) {
        if (current->data == target) {
            return current; 
        }
        current = current->next;
    }
    return NULL; 
}

void deleteAtPosition(struct node** head, int position) {
    if (*head == NULL) {
        return; // List is empty, nothing to delete
    }

    struct node* current = *head;
    int count = 1;

    // Traverse to the position to be deleted
    while (current != NULL && count < position) {
        current = current->next;
        count++;
    }

    // If the position is out of bounds, return
    if (current == NULL) {
        return;
    }

    // Adjust the links to delete the node
    if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    // If deleting the head node, update the head
    if (count == 1) {
        *head = current->next;
    }

    free(current);
}

// Function to sort the doubly linked list using Bubble Sort
void bubbleSort(struct Node* head) {
    int swapped;
    struct node* current;
    struct node* last = NULL;

    if (head == NULL) {
        return; // Empty list
    }

    do {
        swapped = 0;
        current = head;

        while (current->next != last) {
            if (current->data > current->next->data) {
                swap(current, current->next);
                swapped = 1;
            }
            current = current->next;
        }
        last = current;
    } while (swapped);
}*/
