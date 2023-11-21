#pragma once
#include<iostream>
#include <string.h>
#include "../Class/Demineur.h"

extern std::string alphabet; //= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void Display_board(char **board, int size);
short Is_On_Corner(int x, int y, Demineur dm);
void Display_Case(char c);
int Convert_letter(char ltr);
//currently doesn't work on more than 9
int *Read_Coordinates(/*Demineur dm*/);