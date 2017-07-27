#pragma once
#include <String>

class DObject
{
public:
	DObject(int _x, int _y, char _texture, int _id,int _flag);
	~DObject();

	int getX();
	int getY();
	virtual int getFlag();
	virtual char getTexture();
	virtual int getId();
	virtual std::string getName();

protected:
	int x;
	int y;
	int flag;
	char texture;
	int id;
	std::string name;
};


