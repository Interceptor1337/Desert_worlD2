#include "stdafx.h"
#include "MapCell.h"


MapCell::MapCell()
{
}

int MapCell::getDrawFlag()
{
	return drawFlag;
}

int MapCell::getHowManyObjectsAtMe()
{
	return howManyObjectsAtMe;
}


MapCell::~MapCell()
{
}
