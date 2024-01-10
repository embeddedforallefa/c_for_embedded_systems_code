#include <stdio.h>

int main() {
    // Using continue to skip printing when i is equal to 3
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Skipping iteration at i = %d\n", i);
            continue;
        }
        printf("i = %d\n", i);
    }

    return 0;
}