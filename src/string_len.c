#include <stdio.h>

int main(void)
{
    char str[] = "Here is a string to find length";

    unsigned int count = 0; // Stores the string length

    while (str[count] != '\0') // Increment count till we reach the terminating character
        ++count;

    printf("The length of the string \"%s\" is %d characters.\n", str, count);
    return 0;
}