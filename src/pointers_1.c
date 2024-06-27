#include <stdio.h>

int main() {
    int num = 42;
    int *ptr;  // Declare a pointer variable

    ptr = &num;  // Assign the address of 'num' to the pointer

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value stored in ptr: %d\n", *ptr);  // Dereferencing the pointer

    return 0;
}