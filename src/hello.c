/* Very First C Program - Displaying Hello World */
#include <stdio.h>

#define PI 3.14

int main(void)
{
    float area;
    int radius;
    radius = 10;
    area = PI * radius * radius;
    printf("Hello world!");
    printf("Area of circle is: %f", area);
    return 0;
}
