#include <stdio.h>

int main() {
    int userInput;

    printf("Enter a positive number: ");
    scanf("%d", &userInput);

    while (userInput <= 0) {
        printf("Invalid input. Please enter a positive number: ");
        scanf("%d", &userInput);
    }

    printf("You entered: %d\n", userInput);

    return 0;
}