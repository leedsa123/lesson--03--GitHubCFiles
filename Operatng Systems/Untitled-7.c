/*Using a for loop, display all the values of the array;*/

#include <stdio.h>

int main() {
    
    int values[4] = {1, -2, 10, 4};

        printf("Array values:\n");
    
    for (int i = 0; i < 4; i++) {
        printf("values[%d] = %d\n", i, values[i]);
    }

    return 0;
}