#include "stdafx.h"
#include "DObject.h"
#include "iostream"
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include<windows.h>



DObject::DObject(int _x, int _y, char _texture, int _id, int _flag)
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
	id = _id;
	flag = _flag;
	name = "DObject";
}

DObject::~DObject()
{
}

int DObject::getX()
{
	return x;
}

int DObject::getY()
{
	return y;
}

int DObject::getFlag()
{
	return flag;
}

char DObject::getTexture()
{
	return texture;
}

int DObject::getId()
{
	return id;
}

std::string DObject::getName()
{
	return name;
}
