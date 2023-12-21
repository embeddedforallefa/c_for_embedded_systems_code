#include <stdio.h>

int main(void)
{
    int n1 = 30;
    int n2 = 20;
    int n3 = 15;

    if ((n1<n2) && (n1 < n3))
    {
        printf("n1 < n2 < n3 \n");
    }

    if ((n1<n2) || (n2 < n3))
    {
        printf("n1 < n2 < n3 \n");
    }

    // (n1 < n2) ? printf("n1 < n2"): printf("n1 > n2");

    return 0;

}