// Pre-decrement

#include <stdio.h>

int main() {
    int num = 8;

    // Pre-decrement: decrement first, then use the updated value
    int result = --num;

    // Output the results
    printf("Original value: %d\n", num);
    printf("Result after pre-decrement: %d\n", result);

    return 0;
}

