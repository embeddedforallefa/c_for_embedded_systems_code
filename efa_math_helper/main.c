/* Calculator to help us with Math */

#include <stdio.h>

int main()
{
    int first_number;
    int second_number;

    printf("Enter first number: ");
    scanf("%d", &first_number);
    printf("Enter second number: ");
    scanf("%d", &second_number);

    long int result_add= add(first_number,second_number);
    printf("Addition: %d + %d = %d.\n", first_number, second_number, result_add);
    return 0;
}