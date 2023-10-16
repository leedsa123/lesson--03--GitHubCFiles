/*Consider implementing in C a program to manage employee records for a company. The employee data stored in 
the Singly Linked List will consist of the following fields:
Employee Number
Name
Designation/Grade (from 1 to 5)

The Employee Management System will offer the following functionalities:
Creation of N employee records with their respective Employee Number, Name, and Designation/Grade using 
the Singly Linked List.
Execution of Insertion and Deletion operations on employee data in accordance with the company’s requirements.
Display of the complete and updated employee records stored in the Singly Linked List.
Search for an employee by their Employee Number within the Singly Linked List.
The ultimate goal is to establish an efficient Employee Management System using a Singly Linked List for
streamlined management of a company’s employee records. The specific operations to be performed are:
Inserting a new entry into the records.
Deleting an existing entry from the records.
Displaying the records.
Searching within the records.
Exiting the program.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent an employee
struct Employee {
    int empNumber;
    char name[50];
    int grade;
    struct Employee* next;
};

// Function to create a new employee node
struct Employee* createEmployee(int empNumber, const char* name, int grade) {
    struct Employee* newEmployee = (struct Employee*)malloc(sizeof(struct Employee));
    if (newEmployee == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newEmployee->empNumber = empNumber;
    strcpy(newEmployee->name, name);
    newEmployee->grade = grade;
    newEmployee->next = NULL;
    return newEmployee;
}

// Function to add an employee record to the linked list
void addEmployee(struct Employee** head, int empNumber, const char* name, int grade) {
    struct Employee* newEmployee = createEmployee(empNumber, name, grade);
    newEmployee->next = *head;
    *head = newEmployee;
}

// Function to display all employee records
void displayEmployees(struct Employee* head) {
    struct Employee* current = head;
    printf("Employee Records:\n");
    while (current != NULL) {
        printf("Employee Number: %d, Name: %s, Grade: %d\n", current->empNumber, current->name, current->grade);
        current = current->next;
    }
}

int main() {
    struct Employee* employeeList = NULL;

    // Add 5 employee records
    addEmployee(&employeeList, 1, "Brian Budowick", 3);
    addEmployee(&employeeList, 2, "Arron Brown", 4);
    addEmployee(&employeeList, 3, "Dave Hackett", 2);
    addEmployee(&employeeList, 4, "Andy Leeds", 5);
    addEmployee(&employeeList, 5, "Johnathon Young", 3);

    // Display all employee records
    displayEmployees(employeeList);

    return 0;
}