// Post-increment

#include <stdio.h>

int main() {
    int num = 5;

    // Post-increment: use the current value, then increment
    int result = num++;
    
    // Output the results
    printf("Original value: %d\n", num);
    printf("Result after post-increment: %d\n", result);

    return 0;
}