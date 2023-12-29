// demonstrates different ways to uses for loop

#include <stdio.h>

int main(void)
{
    // display the numbers from 1 to 10
    for (int count = 1; count <= 10; ++count)
    {
        printf(" %d", count);
    }

    unsigned long long sum = 0LL; // Stores the sum of the integers
    unsigned int count = 0;       // The number of integers to be summed
    // Read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);
    // Sum integers from 1 to count
    for (unsigned int i = 1; i <= count; sum += i++)
        ;
    printf("\nTotal of the first %u numbers is %llu\n", count, sum);

    char answer = 0;
    for (;;)
    {
        /* Code to read and process some data */
        printf("Do you want to enter some more(y/n): ");
        scanf("%c", &answer);
        if (tolower(answer) == 'n')
            break; // Go to statement after the loop
    }
    /* Statement after the loop */

    return 0;
}