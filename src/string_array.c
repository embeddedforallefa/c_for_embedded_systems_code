#include <stdio.h>

char sayings[3][32] = {
    "Manners maketh man.",
    "Many hands make light work.",
    "Too many cooks spoil the broth."
};

int main(void)
{
    for(unsigned int i = 0 ; i < sizeof(sayings)/ sizeof(sayings[0]) ; ++i)
        printf("%s\n", sayings[i]);

    return 0;
}