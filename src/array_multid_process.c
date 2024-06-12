#include <stdio.h>

// Initializing a 3-dimensional array of integers at the time of declaration
int numbers[2][3][4] = {
                            {   // First block of 3 rows
                                { 10, 20, 30, 40 },
                                { 15, 25, 35, 45 },
                                { 47, 48, 49, 50 }
                            },
                            {   // Second block of 3 rows
                                { 10, 20, 30, 40 },
                                { 15, 25, 35, 45 },
                                { 47, 48, 49, 50 }
                            }
                        };

int main(void)
{
    int sum=0;
    for(int i = 0 ; i < 2 ; ++i)
    {
        for(int j = 0 ; j < 3 ; ++j)
        {
            for(int k = 0 ; k < 4 ; ++k)
            {
                sum += numbers[i][j][k];
            }
        }
    }
    printf("The sum of the values in the numbers array is %d.", sum);

    return 0;
}