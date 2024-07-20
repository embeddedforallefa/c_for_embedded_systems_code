#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for an integer
    ptr = (int*) malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Use the allocated memory
    *ptr = 10;
    printf("Value: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);

    return 0;
}
