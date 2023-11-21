#include "Demineur.h"

Demineur::Demineur(int x, int y)
{
    board_size_x = x;
    board_size_y = y;

    // Allocate memory for the board
    real_board = (char **)malloc(board_size_y * sizeof(char *));
    player_board = (char **)malloc(board_size_y * sizeof(char *));
    for (int i = 0; i < board_size_y; ++i) {
        player_board[i] = (char *)malloc(board_size_x * sizeof(char));
        real_board[i] = (char *)malloc(board_size_x * sizeof(char));
    }

    // Initialize the board (you may want to initialize it to another character, e.g., '-')
    for (int i = 0; i < board_size_y; ++i) {
        for (int j = 0; j < board_size_x; ++j) {
            player_board[i][j] = '-';
            real_board[i][j] = '-';
        }
    }

    // Seed the random number generator
    srand(time(NULL));

    // Place mines (you can adjust the number of mines)
    placeMines(10);
}


Demineur::~Demineur()
{
    for(int i =0; i < board_size_y; i++)
    {
        free(player_board[i]);
    }
}

void Demineur::placeMines(int numMines) {
    for (int i = 0; i < numMines; ++i) {
        int randX = rand() % board_size_x;
        int randY = rand() % board_size_y;

        // Check if there's already a mine at the randomly generated coordinates
        if (real_board[randY][randX] != 'M') {
            // Place a mine at the randomly generated coordinates
            real_board[randY][randX] = 'M';
        } else {
            // If there's already a mine, try again with new random coordinates
            --i;
        }
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
bool Demineur::Is_Lost(int x, int y)
{
    return real_board[x][y] == 'M';
}

bool Demineur::Is_Won()
{
    for (int i = 0; i < board_size_y; ++i) {
        for (int j = 0; j < board_size_x; ++j) {
            if (real_board[i][j]!= 'M' && player_board[i][j] == '.') {
                return false;
            }
        }
    }
    return true;
}