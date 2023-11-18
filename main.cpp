#include "main.h"


int main(void)
{
    char lineA[] = {'X', 'X'};
    char lineB[] = {'X', 'O'};

    char **board = (char **)malloc(2 * sizeof(char *));
    board[0] = (char *)malloc(2 * sizeof(char));
    board[1] = (char *)malloc(2 * sizeof(char));

    char **boardpt = board;

    for (int i = 0; i < 2; i++) {
        (*boardpt)[i] = lineA[i];
    }

    boardpt++;

    for (int i = 0; i < 2; i++) {
        (*boardpt)[i] = lineB[i];
    }

    Display_board(board, 2);

    free(board[0]);
    free(board[1]);
    free(board);

    return 0;
}