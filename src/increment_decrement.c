// Demonstrates increment and decrement operators

#include <stdio.h>

int main() {
    int num1 = 5;
    // Post-increment: use the current value, then increment
    int result1 = num1++;
    printf("Original value: %d\n", num1);
    printf("Result after post-increment: %d\n", result1);

    int num2 = 5;
    // Pre-increment: increment first, then use the updated value
    int result2 = ++num2;
    printf("Original value: %d\n", num2);
    printf("Result after pre-increment: %d\n", result2);
    
    int num3 = 8;
    // Post-decrement: use the current value, then decrement
    int result3 = num3--;
    printf("Original value: %d\n", num3);
    printf("Result after post-decrement: %d\n", result3);

    int num4 = 8;
    // Pre-decrement: decrement first, then use the updated value
    int result4 = --num4;
    printf("Original value: %d\n", num4);
    printf("Result after pre-decrement: %d\n", result4);

    return 0;
}