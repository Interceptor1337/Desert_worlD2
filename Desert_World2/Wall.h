#pragma once
#include "DObject.h"
class Wall :
	public DObject
{
public:
	Wall(int _x, int _y, char _texture, int _id, int _flag);
	~Wall();
};

