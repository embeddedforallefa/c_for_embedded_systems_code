// Demonstrates bitwise operators
// & (bitwise AND)
// | (bitwise OR)
// ^ (bitwise XOR)
// ~ (bitwise NOT)
// << (left shift)
// >> (right shift)

#include <stdio.h>

int main() {
    // Bitwise AND: 1 only if both bits are 1
    unsigned int num1 = 14;  // Binary: 1110
    unsigned int num2 = 7;   // Binary: 0111

    unsigned int result1 = num1 & num2;  // Binary: 0110 (Decimal: 6)
    printf("Result of bitwise AND: %u\n", result1);

    /*-----------------------------------------------------------*/
    // Bitwise OR: 1 if at least one bit is 1
    unsigned int num3 = 14;  // Binary: 1110
    unsigned int num4 = 7;   // Binary: 0111

    unsigned int result2 = num3 | num4;  // Binary: 1111 (Decimal: 15)
    printf("Result of bitwise OR: %u\n", result2);

    /*-----------------------------------------------------------*/
    // Bitwise XOR: 1 if bits are different
    unsigned int num5 = 14;  // Binary: 1110
    unsigned int num6 = 7;   // Binary: 0111

    unsigned int result3 = num5 ^ num6;  // Binary: 1001 (Decimal: 9)
    printf("Result of bitwise XOR: %u\n", result3);

    /*-----------------------------------------------------------*/
    // Bitwise NOT: inverts each bit
    unsigned int num7 = 14;  // Binary 0000 0000 0000 0000 0000 0000 0000 1110

    unsigned int result4 = ~num7;  // Binary: 1111 1111 1111 1111 1111 1111 1111 0001 (Inverted)
    printf("Result of bitwise NOT: %u\n", result4);
    // https://www.rapidtables.com/convert/number/binary-to-decimal.html
    /*-----------------------------------------------------------*/
    // Left Shift: Shifts bits to the left
    unsigned int num8 = 5;  // Binary: 0101

    unsigned int result_left = num8 << 2;  // Binary: 10100 (Decimal: 20)

    // Right Shift: Shifts bits to the right
    unsigned int result_right = num8 >> 1;  // Binary: 0010 (Decimal: 2)

    printf("Result of left shift: %u\n", result_left);
    printf("Result of right shift: %u\n", result_right);
    
    return 0;
}
