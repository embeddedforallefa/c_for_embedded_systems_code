// contains relational operations
// ==, !=, >, <, >=, <=

#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform relational comparisons
    printf("%d is equal to %d: %d\n", num1, num2, num1 == num2);
    printf("%d is not equal to %d: %d\n", num1, num2, num1 != num2);
    printf("%d is less than %d: %d\n", num1, num2, num1 < num2);
    printf("%d is greater than %d: %d\n", num1, num2, num1 > num2);
    printf("%d is less than or equal to %d: %d\n", num1, num2, num1 <= num2);
    printf("%d is greater than or equal to %d: %d\n", num1, num2, num1 >= num2);

    return 0;
}
