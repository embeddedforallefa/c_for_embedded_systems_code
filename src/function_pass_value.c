#include <stdio.h>

void modifyValue(int x) // declaration and definition in one place
{
    printf("value of x = %d \n", x);
    x = 10;
    printf("value of x = %d \n", x);

}

int main() 
{
    int a = 5;
    modifyValue(a);
    printf("value of a = %d", a);
    return 0;
}