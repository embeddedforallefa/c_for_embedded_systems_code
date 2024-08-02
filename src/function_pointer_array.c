#include <stdio.h>

// Function declarations
void add(int a, int b)
{
    printf("Add: %d\n", a + b);
}

void subtract(int a, int b)
{
    printf("Subtract: %d\n", a - b);
}

int main()
{
    // Array of function pointers
    void (*operations[2])(int, int) = {add, subtract};

    // Calling functions from the array
    operations[0](5, 3);
    operations[1](5, 3);

    return 0;
}
