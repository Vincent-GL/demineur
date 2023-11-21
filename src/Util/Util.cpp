#include "Util.h"

std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const std::string ANSI_COLOR_RESET = "\033[0m";
    const std::string ANSI_COLOR_GREEN = "\033[32m";
    const std::string ANSI_COLOR_ORANGE = "\033[33m";
    const std::string ANSI_COLOR_RED = "\033[31m";
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

short Is_On_Corner(int x, int y, Demineur dm)
{
    if (x == 0)
        return 1;
    if (y == 0)
        return 2;
    if (dm.Get_board_col_length() == y)
        return 3;
    if (dm.Get_board_row_length() == x)
        return 4;
    return 0;
}

void Display_Case(char c)
{
    
    std::string colorCodeStr;
    switch (c)
    {
        case '1':
            colorCodeStr = ANSI_COLOR_GREEN;
            break;
        case '2':
            colorCodeStr = ANSI_COLOR_ORANGE;
            break;
        case '3':
            colorCodeStr = ANSI_COLOR_RED;
            break;
        default:
            break;
    }
    std::cout << colorCodeStr << c << ANSI_COLOR_RESET;
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
