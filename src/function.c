#include <stdio.h>

int add(int a, int b); // function declaration

int add(int a, int b) // function definition
{
    return a + b;
}

int main(void)
{
    int sum;
    sum = add(10, 20); // function call
    printf("sum = %d",sum);
    return 0;
}