#include <stdio.h>

int main() {
    // Example of using stdout (printf, putchar, puts)
    printf("=== Welcome to the C Standard Streams Example ===\n");

    // Input using stdin (scanf)
    int age;
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        fprintf(stderr, "Invalid input! Please enter a valid number.\n");  // stderr for error messages
        return 1;
    }

    // Output using stdout (printf)
    printf("You entered age: %d\n", age);

    // Input and output using getchar and putchar
    char ch;
    printf("Enter a single character: ");
    getchar();  // This consumes the leftover newline character from previous input
    ch = getchar();  // Read one character from stdin
    printf("You entered: ");
    putchar(ch);  // Write one character to stdout
    putchar('\n');  // Write a newline to stdout

    // Input using fgets (for strings)
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Read a string from stdin

    // Output using puts (for strings)
    printf("Your name is: ");
    puts(name);  // Write the string to stdout

    // Demonstrating the use of stderr for error messages
    if (age < 0) {
        fprintf(stderr, "Error: Age cannot be negative!\n");
    } else {
        printf("Thank you for providing valid input.\n");
    }

    return 0;
}
