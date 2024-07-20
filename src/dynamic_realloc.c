#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5, new_size, i;

    // Allocate memory for an array of n integers
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the array
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Initial array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize the array
    new_size = 10;
    arr = (int*) realloc(arr, new_size * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Initialize the new elements
    for (i = n; i < new_size; i++) {
        arr[i] = i + 1;
    }

    printf("Resized array elements: ");
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
