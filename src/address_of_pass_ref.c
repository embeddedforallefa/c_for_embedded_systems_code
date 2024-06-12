#include <stdio.h>

void increment(int *x) {
    (*x)++;
}

int main() {
    int num = 5;
    printf("Before increment: %d\n", num);

    // Pass the address of 'num' to the function
    increment(&num);

    printf("After increment: %d\n", num);

    return 0;
}