#include "stdafx.h"
#include "player.h"
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include<windows.h>
#include<string>


void player::playerControl()
{
	if (GetKeyState('W') < 0)
	{
		cleaner::clean(getX(), getY());
		walk(0, -1, 80, 25);
		drawMe();

		//system("pause");
	}
	if (GetKeyState('A') < 0)
	{
		cleaner::clean(getX(), getY());
		walk(-1, 0, 80, 25);
		drawMe();

		//system("pause");
	}
	if (GetKeyState('S') < 0)
	{
		cleaner::clean(getX(), getY());
		walk(0, 1, 80, 25);
		drawMe();

		//system("pause");
	}
	if (GetKeyState('D') < 0)
	{
		cleaner::clean(getX(), getY());
		walk(1, 0, 80, 25);
		drawMe();


		//system("pause");
	}
}

void player::drawMe()
{
	COORD position;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(hConsole,position);
	cout << texture;
}

player::player(int _x, int _y, char _texture, int _id, int _flag):Unit(_x, _y, _texture, _id,_flag)
{
	if (_x >= 0)
	{
		x = _x;
	}
	if (_y >= 0)
	{
		y = _y;
	}
	texture = _texture;
	name = "player";
}

player::~player()
{
}

