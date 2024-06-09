#include <stdio.h>

int main() {
    int num, factorial = 1;  // Initialization

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Do-while loop for calculating factorial
    do {
        factorial *= num;  // Code to be executed
        num--;  // Update the condition
    } while (num > 0);

    printf("Factorial: %d\n", factorial);

    return 0;
}