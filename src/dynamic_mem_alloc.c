#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    // Allocate memory for an array of 5 integers
    arr = (int*)malloc(5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    printf("Memory allocated at : %d \n", arr);
    int n, i;
    for (i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }

    // Print the elements of the array
    printf("The elements of the array are: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Deallocate the memory when done
    free(arr);

    return 0;
}