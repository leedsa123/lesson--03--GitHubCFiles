/*To create a C function named str_concat that concatenates two strings and returns a new string 
with the appropriate length, you can follow these steps. Make sure to include appropriate 
error handling and memory management to avoid memory leaks. Here's a sample implementation:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* str_concat(char* str1, char* str2) {
    if (str1 == NULL || str2 == NULL) {
        // Handle NULL input strings (you can choose to return NULL or an empty string)
        return NULL;
    }

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t total_len = len1 + len2;

    // Allocate memory for the concatenated string (+1 for the null terminator)
    char* result = (char*)malloc(total_len + 1);

    if (result == NULL) {
        // Handle memory allocation failure
        return NULL;
    }

    // Copy the first string
    strcpy(result, str1);

    // Concatenate the second string
    strcat(result, str2);

    return result;
}

int main() {
    char* str1 = "Friday, ";
    char* str2 = "Thirteenth!";
    char* concatenated = str_concat(str1, str2);

    if (concatenated != NULL) {
        printf("Concatenated string: %s\n", concatenated);
        free(concatenated); // Free the dynamically allocated memory
    } else {
        printf("Error: Unable to concatenate strings.\n");
    }

    return 0;
}
/*In this code, we first check if the input strings are valid (not NULL). 
Then, we calculate the total length required for the concatenated string and allocate memory 
for it using malloc. After the concatenation, we return the new string. 
Don't forget to free the memory allocated for the result string when you're done with it to prevent memory leaks.*/