// Demonstrates assignment operators
// =  Simple assignment operator
// += Add AND assignment operator
// -= Subtract AND assignment operator
// *= Multiply AND assignment operator
// /= Divide AND assignment operator
// %= Modulus AND assignment operator
// <<= Left shift AND assignment operator
// >>= Right shift AND assignment operator
// &= Bitwise AND AND assignment operator
// |= Bitwise OR AND assignment operator
// ^= Bitwise exclusive OR AND assignment operator

#include <stdio.h>

int main() {
    // Basic assignment
    int num = 10 + 30;
    printf("Value of num: %d\n", num);

    int num1 = 5;
    // Compound assignment with addition
    num1 += 3;  // Equivalent to: num1 = num1 + 3
    printf("Value of num1 after addition: %d\n", num1);


    unsigned int num2 = 10;
    // Compound assignment with multiplication
    num2 *= 3;  // Equivalent to: num2 = num2 * 3
    printf("Value of num2 after multiplication: %u\n", num2);

    unsigned int num3 = 10;
    // Compound assignment with bitwise AND
    num3 &= 3;  // Equivalent to: num3 = num3 & 3
    printf("Value of num3 after bitwise AND: %u\n", num3);

    unsigned int num4 = 10;
    // Compound assignment with left shift
    num4 <<= 1;  // Equivalent to: num4 = num4 << 1
    printf("Value of num4 after left shift: %u\n", num4);

    return 0;
}
