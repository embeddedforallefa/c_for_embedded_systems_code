#include <stdio.h>

int main(void)
{
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};

    printf("value of board[1][2] : %c\n", board[1][2]);
    return 0;
}