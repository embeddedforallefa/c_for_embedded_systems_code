#include <stdio.h>

int main(void)
{
    int num1 = 20;
    int num2 = 10;
    int num3 = 5;

    if(num1 > num2)
    {
        printf("numer1 > num2 \n");
        if(num1 > num3)
        {
            printf("number1 > number3 \n");
        }
        else
        {
            printf("numbe1 < numer3\n");
        }
    }
    else
    {
        printf("number 1 < number 2\n");
    }
    printf("value is compared \n");
    return 0;
}