/*Write a program that displays the following menu in a loop :

1- run a program 
2- kill a process (hint : lookup the kill 
manual)
3- list the files in the current folder (hint : 
lookup the ls manual)
4- quit
Use the «mySystem » function to implement the 
different options of your menu (except for quit of 
course).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to run a program using mySystem
void runProgram() {
    char command[256];
    printf("Enter the command to run: ");
    fgets(command, sizeof(command), stdin);
    // Remove the newline character at the end
    command[strcspn(command, "\n")] = '\0';
    
    // Use mySystem to execute the command
    int result = mySystem(command);
    
    if (result == 0) {
        printf("Command executed successfully.\n");
    } else {
        printf("Command failed with exit code %d.\n", result);
    }
}

// Function to kill a process using mySystem
void killProcess() {
    int pid;
    printf("Enter the PID of the process to kill: ");
    scanf("%d", &pid);
    
    // Use mySystem to execute the kill command
    char command[256];
    snprintf(command, sizeof(command), "kill -9 %d", pid);
    int result = mySystem(command);
    
    if (result == 0) {
        printf("Process with PID %d killed successfully.\n", pid);
    } else {
        printf("Failed to kill process with PID %d.\n", pid);
    }
}

// Function to list files in the current folder using mySystem
void listFiles() {
    // Use mySystem to execute the ls command
    int result = mySystem("ls -l");
    
    if (result == 0) {
        printf("Listed files in the current folder.\n");
    } else {
        printf("Failed to list files.\n");
    }
}

int main() {
    int choice;
    
    do {
        printf("\nMenu:\n");
        printf("1 - Run a program\n");
        printf("2 - Kill a process\n");
        printf("3 - List files in the current folder\n");
        printf("4 - Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                runProgram();
                break;
            case 2:
                killProcess();
                break;
            case 3:
                listFiles();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        
        // Clear the input buffer
        while (getchar() != '\n');
        
    } while (choice != 4);
    
    return 0;
}
/*This program presents a menu to the user and uses the mySystem function to execute the corresponding 
commands for options 1, 2, and 3. 
It will continue to display the menu until the user selects option 4 to quit.*/