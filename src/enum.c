#include <stdio.h>

// Define an enumeration named 'Weekday'
enum Weekday
{
    Monday = 1, // Enumerators with explicit values
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    // Declare a variable of type 'enum Weekday'
    enum Weekday today;

    // Input the month from the user
    printf("Enter the current day (1-7): ");
    scanf("%d", (int *)&today);

    // Check if the input is valid
    if (today >= Monday && today <= Sunday)
    {
        switch (today)
        {
        case Sunday:
            printf("Today is Sunday.");
            break;
        case Monday:
            printf("Today is Monday.");
            break;
        case Tuesday:
            printf("Today is Tuesday.");
            break;
        case Wednesday:
            printf("Today is Wednesday.");
            break;
        case Thursday:
            printf("Today is Thursday.");
            break;
        case Friday:
            printf("Today is Friday.");
            break;
        case Saturday:
            printf("Today is Saturday.");
            break;
        }
        printf("\n");
    }
    else
    {
        printf("Invalid day entered.\n");
    }

    return 0;
}
