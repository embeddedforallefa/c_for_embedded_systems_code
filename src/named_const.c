#include <stdio.h>

int main()
{
    // Define a named constant using const keyword
    const double PI = 3.14159;
    PI = 10;
    // Using the named constant
    double radius = 5.0;
    double area = PI * radius * radius;

    printf("Area of the circle: %f\n", area);

    return 0;
}
