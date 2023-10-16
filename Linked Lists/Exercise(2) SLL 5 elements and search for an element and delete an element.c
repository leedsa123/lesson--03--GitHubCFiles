/*Program to create a singly linked list of five elements, print the list, search for a particular element 
given by the user, and delete a particular element with a position given by the user:*/


#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
void insertEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the elements of the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to search for a particular element and return its position
int searchAndGetPosition(struct Node* head, int key) {
    int position = 1;
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1; // Element not found
}

// Function to delete a node at a given position
void deleteNodeAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        return; // List is empty, nothing to delete
    }
    if (position == 1) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    struct Node* current = *head;
    int i;
    for (i = 1; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }
    if (current == NULL || current->next == NULL) {
        return; // Position out of bounds
    }
    struct Node* temp = current->next;
    current->next = temp->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;

    // Insert five elements into the linked list
    insertEnd(&head, 34);
    insertEnd(&head, 56);
    insertEnd(&head, 764);
    insertEnd(&head, 24);
    insertEnd(&head, 94);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Search for an element and return its position
    int key;
    printf("Enter an element to search: ");
    scanf("%d", &key);
    int position = searchAndGetPosition(head, key);
    if (position != -1) {
        printf("%d found at position %d\n", key, position);
    } else {
        printf("%d not found in the list\n", key);
    }

    // Delete a node at a given position
    int deletePosition;
    printf("Enter a position to delete: ");
    scanf("%d", &deletePosition);
    deleteNodeAtPosition(&head, deletePosition);

    // Print the updated linked list
    printf("Updated Linked List: ");
    printList(head);

    return 0;
}