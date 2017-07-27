#include "stdafx.h"
#include "cleaner.h"
#include <iostream>

void cleaner::clean(int x, int y)
{
	COORD position;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(hConsole, position);
	std::cout << ' ';
}

cleaner::cleaner()
{
}


cleaner::~cleaner()
{
}
