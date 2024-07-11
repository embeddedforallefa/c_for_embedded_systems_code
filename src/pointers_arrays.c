#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr now points to the first element of arr

    printf("%d\n", *ptr); // Outputs: 1
    printf("%d\n", *(ptr + 1)); // Outputs: 2
    printf("%d\n", *(ptr + 2)); // Outputs: 3

    // Pointer Arithmetic
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // Outputs: 1 2 3 4 5
    }

    printf("\n"); // new line

    // Dynamic Arrays with Pointers
    int *arr1 = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        arr1[i] = i + 1; // Initialize the array
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]); // Outputs: 1 2 3 4 5
    }

    free(arr1); // Don't forget to free the allocated memory

}