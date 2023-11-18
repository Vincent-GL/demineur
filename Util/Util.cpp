#include "Util.h"

std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void Display_board(char **board, int size)
{

    std::cout << "  ";
    char *letters = &alphabet[0];
    //*letters = &alphabet;
    for (int z = 1; z <= size; z++)
    {

        std::cout << *letters << " ";
        letters++; 
    }
    std::cout<<"\n";
    int j = 0;
    int i;
    while(board[j])
    {
        i = 0;
        std::cout << j+1;
        while (board[j][i])
        {
            std::cout << " " << board[j][i];
            i++;
        }
        std::cout<<"\n";
        j++;
    }
}
