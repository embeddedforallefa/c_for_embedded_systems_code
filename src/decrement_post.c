// Post-decrement

#include <stdio.h>

int main() {
    int num = 8;

    // Post-decrement: use the current value, then decrement
    int result = num--;

    // Output the results
    printf("Original value: %d\n", num);
    printf("Result after post-decrement: %d\n", result);

    return 0;
}
