#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Attempt to access an element outside the valid range
    int value = numbers[6];

    // Print the accessed value (this behavior is undefined)
    printf("Value at index 6: %d\n", value);

    return 0;
}
