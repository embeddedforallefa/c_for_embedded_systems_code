// Demonstrates logical operators
// && (logical AND)
// || (logical OR) 
// ! (logical NOT)

#include <stdio.h>

int main() {
    // Declare variables
    int num1 = 5, num2 = 10;

    // Logical AND: returns true if both conditions are true
    if (num1 > 0 && num2 > 0) {
        printf("Both numbers are positive.\n");
    } else {
        printf("At least one number is not positive.\n");
    }

    int num3 = -3, num4 = 7;

    // Logical OR: returns true if at least one condition is true
    if (num1 < 0 || num2 < 0) {
        printf("At least one number is negative.\n");
    } else {
        printf("Both numbers are non-negative.\n");
    }

    int isSunny = 1; // 1 represents true

    // Logical NOT: negates the value of its operand
    if (!isSunny) {
        printf("It's not sunny today.\n");
    } else {
        printf("It's sunny today.\n");
    }

    return 0;
}
