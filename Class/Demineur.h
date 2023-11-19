#pragma once
#include <malloc.h>
#include <memory>
class Demineur
{
private:
    int board_size_x;
    int board_size_y;
    char **player_board;
    char **real_board;
public:
    Demineur(int x, int y);
    ~Demineur();
    int Get_board_row_length();
    int Get_board_col_length();
};