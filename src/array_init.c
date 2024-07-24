#include <stdio.h>

int main() {
    // Initializing an array of integers at the time of declaration
    int numbers1[5] = {1, 2, 3, 4, 5};

    // Initializing an array of integers with 0
    int numbers2[5] = {0};

    // Initializing an array of integers at the time of declaration
    char numbers3[] = {10, 20, 30, 40, 50, 60, 70};

    // Display the initialized arrays
    printf("Initialized Array 'numbers1': ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numbers1[i]);
    }

    printf(" \nInitialized Array 'numbers2': ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numbers2[i]);
    }

    printf(" \nInitialized Array 'numbers3': ");
    for (int i = 0; i < sizeof(numbers3); ++i) {
        printf("%d ", numbers3[i]);
    }
    return 0;
}
