// Demonstrates sizeof() operator

#include <stdio.h>

int main() {
    // sizeof with data types
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));

    // sizeof with variables
    int num;
    double pi;
    char letter;

    printf("Size of num: %zu bytes\n", sizeof(num));
    printf("Size of pi: %zu bytes\n", sizeof(pi));
    printf("Size of letter: %zu bytes\n", sizeof(letter));

    // sizeof with arrays
    int arr[5];
    char str[] = "Hello";

    printf("Size of arr: %zu bytes\n", sizeof(arr));
    printf("Size of str: %zu bytes\n", sizeof(str));

    return 0;
}
