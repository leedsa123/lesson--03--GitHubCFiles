/*Implement your own system function called « mySystem »*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int mySystem(const char *command) {
    pid_t pid;
    int status;

    // Fork a new process
    pid = fork();

    if (pid == -1) {
        perror("Fork failed");
        return -1;
    } else if (pid == 0) { // Child process
        // Execute the command in the child process
        execl("/bin/sh", "sh", "-c", command, (char *)NULL);
        // If execl fails, exit with an error code
        perror("Exec failed");
        exit(EXIT_FAILURE);
    } else { // Parent process
        // Wait for the child process to complete
        if (waitpid(pid, &status, 0) == -1) {
            perror("Waitpid failed");
            return -1;
        }

        // Check if the child process terminated normally
        if (WIFEXITED(status)) {
            return WEXITSTATUS(status);
        } else {
            return -1;
        }
    }
}

int main() {
    int result = mySystem("ls -l"); // Replace this with the command you want to execute
    if (result == -1) {
        printf("Command execution failed\n");
    } else {
        printf("Command returned exit code: %d\n", result);
    }
    return 0;
}
