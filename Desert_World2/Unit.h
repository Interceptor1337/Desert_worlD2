#pragma once
#include "DObject.h"
class Unit :
	public DObject
{
public:
	Unit(int _x, int _y, char _texture, int _id, int _flag);
	void walk(int dx, int dy, int MaxMapSizeX, int MaxMapSizeY);
	~Unit();
};

