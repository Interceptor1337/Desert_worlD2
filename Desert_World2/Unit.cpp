#include "stdafx.h"
#include "Unit.h"


Unit::Unit(int _x, int _y, char _texture, int _id, int _flag):DObject(_x,_y,_texture,_id,_flag)
{
	name = "Unit";
}

void Unit::walk(int dx, int dy, int MaxMapSizeX, int MaxMapSizeY)
{
	if ((x + dx >= 0) && (x + dx <= MaxMapSizeX))
		x += dx;

	if ((y + dy >= 0) && (y + dy <= MaxMapSizeY))
		y += dy;
}
Unit::~Unit()
{
}
