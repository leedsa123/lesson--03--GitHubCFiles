/*Without using strcmp, code a function int are_string_equals(char* str1, char* str2) which 
returns 1 if str is the same as str2 and 0 otherwise*/


#include <stdio.h>

int are_string_equals(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0; // Return 0 if a mismatch is found
        }
        str1++;
        str2++;
    }

    // After the loop, if both strings are null-terminated, they are equal
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char str1[] = "whassup";
    char str2[] = "whassupy";

    if (are_string_equals(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}