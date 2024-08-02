#include <stdio.h>

// Callback function
void greet(const char *name)
{
    printf("Hello, %s!\n", name);
}

// Function that accepts a callback
void execute(void (*callback)(const char *), const char *arg)
{
    callback(arg);
}

int main()
{
    // Using the callback
    execute(greet, "World");

    return 0;
}