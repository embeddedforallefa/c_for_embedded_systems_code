# include <stdio.h>

 void function(void) {
    int localVar = 10;  // localVar is local to this function
    if (localVar > 5) {
        int blockVar = 20;  // blockVar is local to this block
        printf("blockVar: %d\n", blockVar);
    }
    // printf("blockVar: %d\n", blockVar); // Error: blockVar is not accessible here
}

int main(void)
{
    function();
    // printf("localVar: %d\n", localVar); // Error: localVar is not accessible here
    return 0;
}