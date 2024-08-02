#include <stdio.h>

// Function declaration
int add(int a, int b) 
{
    return a + b;
}

int main() 
{
    // Function pointer declaration
    int (*operation)(int, int);
    
    // Assigning the address of the function 'add' to the pointer
    operation = add;
    
    // Calling the function using the pointer
    int result = operation(5, 3);
    printf("Result: %d\n", result);
    
    return 0;
}