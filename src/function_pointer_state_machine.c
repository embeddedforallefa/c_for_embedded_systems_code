#include <stdio.h>

// State functions
void stateA()
{
    printf("In State A\n");
}

void stateB()
{
    printf("In State B\n");
}

void stateC()
{
    printf("In State C\n");
}

int main()
{
    // Array of function pointers
    void (*state[])(void) = {stateA, stateB, stateC};

    // Simulating state transitions
    for (int i = 0; i < 3; i++)
    {
        state[i]();
    }

    return 0;
}