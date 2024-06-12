#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = &arr[0];

    for (int i = 0; i < 5; i++) {
        printf("Value at index %d: %d\n", i, *ptr);
        ptr++; // Move to the next element in the array
    }

    return 0;
}