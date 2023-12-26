// Demonstrates arithmetic operators
// + Addition
// - Subtraction
// * Multiplication
// / Division
// % Modulus - remainder after division

#include <stdio.h>

int main() {
    // Declare variables
    int first_number, second_number, sum, difference, product, quotient, remainder;

    // Input values from the user
    printf("Enter two integers (separated by a space): ");
    scanf("%d %d", &first_number, &second_number);

    // Perform arithmetic operations
    sum = first_number + second_number;
    difference = first_number - second_number;
    product = first_number * second_number;

    // Check if b is not zero before performing division
    if (second_number != 0) {
        quotient = first_number / second_number;
        remainder = first_number % second_number;
    } else {
        // Handle division by zero
        printf("Cannot divide by zero.\n");
        return 1; // Exit with an error code
    }

    // Display the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    return 0;
}
