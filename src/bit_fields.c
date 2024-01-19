// C program to demonstrate use of Bit-fields
#include <stdio.h>

struct date1
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

// Space optimized representation of the date
struct date2
{
    // d has value between 0 and 31, so 5 bits are sufficient
    unsigned int day : 5;
    // m has value between 0 and 15, so 4 bits are sufficient
    unsigned int month : 4;
    unsigned int year;
};

int main()
{
    printf("Size of date1 is %lu bytes\n", sizeof(struct date1));
    struct date1 dt1 = {19, 01, 2024};
    printf("Date1 is %d/%d/%d \n", dt1.day, dt1.month, dt1.year);

    printf("Size of date2 is %lu bytes\n", sizeof(struct date2));
    struct date2 dt2 = {19, 01, 2024};
    printf("Date2 is %d/%d/%d \n", dt2.day, dt2.month, dt2.year);
    return 0;
}
