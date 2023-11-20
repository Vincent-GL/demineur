#include "Demineur.h"



Demineur::Demineur(int x, int y)
{
    char **board = (char **)malloc(2 * sizeof(char *));
    board[0] = (char *)malloc(2 * sizeof(char));
    board[1] = (char *)malloc(2 * sizeof(char));

    char **boardpt = board;

}

Demineur::~Demineur()
{
    for(int i =0; i < board_size_y; i++)
    {
        free(player_board[i]);
    }
}

int Demineur::Get_board_col_length()
{
    return board_size_x;
}

int Demineur::Get_board_row_length()
{
    return board_size_y;
}