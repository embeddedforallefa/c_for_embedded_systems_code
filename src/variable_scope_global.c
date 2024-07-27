# include <stdio.h>

int globalVar = 5;  // globalVar is accessible from any function in this file

 void function(void) 
 {
    globalVar = 10;  // modify globalVar
    printf("globalVar: %d\n", globalVar);
}

int main(void)
{
    printf("globalVar: %d\n", globalVar);
    function();
    printf("globalVar: %d\n", globalVar);
    globalVar = 15;  // modify globalVar
    printf("globalVar: %d\n", globalVar);
    return 0;
}