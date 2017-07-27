#include "stdafx.h"
#include "bot.h"

bot::bot(int _x, int _y, char _texture, int _id, int _flag):Unit(_x,_y,_texture, _id,_flag)
{
	x = _x;
	y = _y;
	texture = _texture;
	name = "bot";
}

void bot::walk(int playerX, int playerY)
{
	if (((x - playerX)*(x - playerX)) + ((y - playerY)*(y - playerY)) <= 64)
	{
		HuntFlag = true;
	}
	else
	{
		HuntFlag = false;
	}
	if(HuntFlag)
	{
		int a = rand() % 2;
		if (a == 1) {
			if (x > playerX)
			{
				x--;
			}
			if (y > playerY)
			{
				y--;
			}
			if (x < playerX)
			{
				x++;
			}
			if (y < playerY)
			{
				y++;
			}
		}
	}
	else {
		int a = rand() % 6;
		if (a == 0)
		{
			if (x + 1 <= 80) {
				x += 1;
			}
		}
		else if (a == 1)
		{
			if (x - 1 >= 0) {
				x += -1;
			}
		}
		else if (a == 2)
		{
			if (y + 1 <= 25) {
				y += 1;
			}
		}
		else if (a == 3)
		{
			if (y - 1 >= 0) {
				y += -1;
			}
		}
	}
}


