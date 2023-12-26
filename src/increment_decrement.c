// Demonstrates increment and decrement operators

#include <stdio.h>

int main() {
    int num1 = 5;
    // Post-increment: use the current value, then increment
    int result1 = num1++;
    printf("------post-increment------\n");
    printf("value of num1: %d\n", num1);
    printf("value of Result1 : %d\n", result1);

    int num2 = 5;
    // Pre-increment: increment first, then use the updated value
    int result2 = ++num2;
    printf("------pre-increment------\n");
    printf("value of num2: %d\n", num2);
    printf("value of Result2 : %d\n", result2);
    
    int num3 = 8;
    // Post-decrement: use the current value, then decrement
    int result3 = num3--;
    printf("------post-decrement------\n");
    printf("value of num3: %d\n", num3);
    printf("value of Result3 : %d\n", result3);

    int num4 = 8;
    // Pre-decrement: decrement first, then use the updated value
    int result4 = --num4;
    printf("------pre-decrement------\n");
    printf("value of num4: %d\n", num4);
    printf("value of Result4 : %d\n", result4);

    return 0;
}