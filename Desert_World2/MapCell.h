#pragma once
#include "DObject.h"

class MapCell
{
protected:
	int howManyObjectsAtMe;
	int drawFlag;
	DObject* objectsAtMe;
	void addObject();
	void deleteObject();
public:
	MapCell();
	int getDrawFlag();
	int getHowManyObjectsAtMe();
	~MapCell();
};

