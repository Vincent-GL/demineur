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


bool Is_On_Corner(int x, int y, Demineur dm)
{
    return x == 0 || y == 0 || dm.Get_board_col_length() == y || dm.Get_board_row_length();
}

int Convert_letter(char ltr)
{
    return ltr - 'A';
}

int *Read_Coordinates(/*Demineur dm*/)
{
    std::cout << "Enter coordinates: (ex: A2)";
    std::string line;
    std::getline(std::cin, line);
    while (line.empty() || (line.length() < 2 || !(line[0] >= 'A' && line[0] <= 'Z') || !std::isdigit(line[1])))
    {
        std::cout << "Please enter valid coordinates.";
        std::getline(std::cin, line);
    }
    int *res = (int *)malloc(2*sizeof(int));
    *res = Convert_letter(line[0]);
    *(res+1) = line[1] - '0';
    return res;
}

