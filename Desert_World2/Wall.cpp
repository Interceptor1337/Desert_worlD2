#include "stdafx.h"
#include "Wall.h"



Wall::Wall(int _x, int _y, char _texture, int _id, int _flag) :DObject(_x, _y, _texture, _id, _flag)
{
	name = "Wall";
}


Wall::~Wall()
{
}
