#include <stdio.h>
#include <string.h>

int main()
{
    // string_src is the source string and 
    char string_src[] = "Embedded for All";
    // string_dst is the destination string
    char string_dst[strlen(string_src)];
    int index;

    // Execute loop till null found
    for (index = 0; string_src[index] != '\0'; ++index) {
        // copying the character by character
        
        string_dst[index] = string_src[index];
    }
    // end with terminating character
    string_dst[index] = '\0';

    // printing the destination string
    printf("string_dst : %s", string_dst);

    return 0;
}
