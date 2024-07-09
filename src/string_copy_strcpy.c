#include <stdio.h>
#include <string.h>

int main()
{
    // string_src is the source string and 
    char string_src[] = "Embedded for All";
    // string_dst is the destination string
    char string_dst[strlen(string_src)];

    // copying string_src to string_dst
    strcpy(string_dst, string_src);

    // printing the destination string
    printf("string_dst : %s", string_dst);

    return 0;
}
