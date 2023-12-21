#include <stdio.h>

// Define a named constant using #define
#define PI 3.14159

int main()
{
    // Using the named constant
    double radius = 5.0;
    double area = PI * radius * radius;

    printf("Area of the circle: %f\n", area);

    return 0;
}
