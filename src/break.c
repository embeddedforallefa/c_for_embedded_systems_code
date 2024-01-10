#include <stdio.h>

int main() {
    // Using break to exit the loop when i is equal to 3
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Breaking out of the loop at i = %d\n", i);
            break;
        }
        printf("i = %d\n", i);
    }

    return 0;
}