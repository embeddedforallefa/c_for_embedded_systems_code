// Pre-increment

#include <stdio.h>

int main() {
    int num = 5;

    // Pre-increment: increment first, then use the updated value
    int result = ++num;
    
    // Output the results
    printf("Original value: %d\n", num);
    printf("Result after pre-increment: %d\n", result);

    return 0;
}
