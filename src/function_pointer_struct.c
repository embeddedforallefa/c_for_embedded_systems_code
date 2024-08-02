#include <stdio.h>

// Structure with function pointer
typedef struct
{
    void (*operation)(int, int);
} Operation;

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
    Operation op;

    // Assigning and using the function pointer
    op.operation = add;
    op.operation(5, 3);

    op.operation = subtract;
    op.operation(5, 3);

    return 0;
}
