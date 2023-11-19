#pragma once
#include<iostream>
#include <string.h>
#include "../Class/Demineur.h"

extern std::string alphabet; //= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void Display_board(char **board, int size);
bool Is_On_Corner(int x, int y, Demineur dm);
int Convert_letter(char ltr);
int *Read_Coordinates(/*Demineur dm*/);