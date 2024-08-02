#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    // Function pointer declaration
    int (*operation)(int, int) = NULL;
    char op;

    printf("Operation +/-: ");
    scanf("%c", &op); // get the operation from user

    // Assign function based on condition
    if (op == '+')
    {
        operation = add;
    }
    else if (op == '-')
    {
        operation = subtract;
    }
    else
    {
        printf("invalid operation");
    }

    // Call the selected function
    if (operation != NULL)
    {
        int result = operation(5, 3);
        printf("Result: %d\n", result);
    }

    return 0;
}