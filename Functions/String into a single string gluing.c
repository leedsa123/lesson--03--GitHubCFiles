/*Code a function name char* join(char** strings, int array_size, char glue) which combines 
an array of string into a single string gluing each string with the “glue” char*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join(char** strings, int array_size, char glue) {
    if (array_size <= 0 || strings == NULL) {
        return NULL;
    }

    int total_length = 0;
    for (int i = 0; i < array_size; i++) {
        total_length += strlen(strings[i]);
    }

    // Account for the glue characters
    int result_length = total_length + (array_size - 1);

    // Allocate memory for the resulting string
    char* result = (char*)malloc(result_length + 1);
    if (result == NULL) {
        return NULL;  // Memory allocation failed
    }
    
        // Copy the strings and glue characters into the result
    int index = 0;
    for (int i = 0; i < array_size; i++) {
        strcpy(result + index, strings[i]);
        index += strlen(strings[i]);
        if (i < array_size - 1) {
            result[index++] = glue; // Add the glue character
        }
    }

    result[result_length] = '\0'; // Null-terminate the resulting string
    return result;
}

int main() {
    // Example usage
    char* words[] = {"Hello", "World", "C", "Programming"};
    int array_size = 4;
    char glue = ' ';

    char* result = join(words, array_size, glue);
    if (result != NULL) {
        printf("Joined string: %s\n", result);
        free(result); // Don't forget to free the allocated memory when done
    } else {
        printf("Error: Memory allocation failed.\n");
    }

    return 0;
}
/*This code defines the join function, which takes an array of strings (char** strings), the array size, 
    and the glue character. It calculates the total length of the resulting string, allocates memory for it, 
    and then copies the individual strings and glue characters to create the final joined string. 
    Finally, it null-terminates the resulting string and returns it.*/