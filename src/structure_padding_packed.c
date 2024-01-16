#include <stdio.h>

// Define a structure with different data types
struct Example {
    char a;      // 1 byte
    int b;       // 4 bytes
    double c;    // 8 bytes
} __attribute__((packed));

int main() {
    // Create an instance of the structure
    struct Example example;

    // Print the addresses of structure members
    printf("Address of a: %p\n", (void*)&example.a);
    printf("Address of b: %p\n", (void*)&example.b);
    printf("Address of c: %p\n", (void*)&example.c);

    // Calculate the size of the structure
    size_t size = sizeof(struct Example);
    printf("Size of struct Example: %zu bytes\n", size);
    return 0;
}