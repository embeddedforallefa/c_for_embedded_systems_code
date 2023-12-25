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
    int num = 10;
    printf("Value of num: %d\n", num);

    int num1 = 5;
    // Compound assignment with addition
    num1 += 3;  // Equivalent to: num1 = num1 + 3
    printf("Value of num1 after addition: %d\n", num1);


    unsigned int num2 = 10;
    // Compound assignment with bitwise AND
    num2 &= 3;  // Equivalent to: num2 = num2 & 3
    printf("Value of num2 after bitwise AND: %u\n", num2);

    return 0;
}
