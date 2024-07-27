# include <stdio.h>

static int fileVar = 5;  // fileVar is accessible from anywhere in this file only

 void function(void) 
 {
    fileVar = 10;  // modify fileVar
    printf("fileVar: %d\n", fileVar);
}

int main(void)
{
    printf("fileVar: %d\n", fileVar);
    function();
    printf("fileVar: %d\n", fileVar);
    fileVar = 15;  // modify fileVar
    printf("fileVar: %d\n", fileVar);
    return 0;
}