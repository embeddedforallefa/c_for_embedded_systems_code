#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5, i;

    // Allocate memory for an array of n integers
    arr = (int*) calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Use the allocated memory
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // All elements are initialized to 0
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
