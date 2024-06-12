#include <stdio.h>

int main() {
    int num = 42;
    printf("Value of num: %d\n", num);
    printf("Memory address of num: %p\n", (void*)&num);

    return 0;
}