#pragma once
#include "DObject.h"
#include "Unit.h"
#include <iostream>
#include "cleaner.h"
#include <list>
#include <iterator>
using namespace std;

class player :
	public Unit
{
public:
	void playerControl();
	void drawMe();
	player(int _x, int _y, char _texture, int _id, int _flag);
	~player();
protected:
	list<DObject*> inventory;
	list<DObject*> hands;
};

