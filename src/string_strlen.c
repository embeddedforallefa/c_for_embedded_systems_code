#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Here is a string to find length";

    printf("The length of the string \"%s\" is %d characters.\n", str, strlen(str));
    return 0;
}