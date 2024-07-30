#include <stdio.h>

int main()
{
    double values[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    size_t element_count = sizeof(values) / sizeof(values[0]);
    printf("The size of the array is %zu bytes \n ", sizeof(values));
    printf("and there are %u elements of %zu bytes each\n", element_count, sizeof(values[0]));

    double sum = 0.0;
    for (unsigned int i = 0; i < sizeof(values) / sizeof(values[0]); ++i)
        sum += values[i];
    printf("The sum of the values is %.2f", sum);

    return 0;
}
