#include <stdio.h>

int main() {
    int num1 = 5, num2 = 3, num3 = 20, num4 = 2;

    int result1 = num1 * num2 + num3 + 2 / num4;  // Operator precedence determines the order of evaluation

    int result2 = (num1 * num2) + (num3 + 2) / num4;  // Operator precedence determines the order of evaluation

    int result3 = ((num1 * num2) + (num3 + 2))/ num4;  // Operator precedence determines the order of evaluation

    printf("Result: %d\n", result1);
    printf("Result: %d\n", result2);
    printf("Result: %d\n", result3);

    return 0;
}
