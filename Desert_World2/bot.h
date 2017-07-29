#pragma once
#include <ctime>
#include "Unit.h"
class bot :
	public Unit
{
public:
	bot(int _x, int _y, char _texture, int _id, int _flag);
	void walk(int playerX, int playerY);
protected:
	bool HuntFlag;
	int thisIsTestingThing;
};