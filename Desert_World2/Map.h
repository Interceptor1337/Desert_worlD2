#pragma once

#include"GameClasses.h"
#include<vector>
#include<string>
#include<fstream>

class Map
{
private:
	
	int XMaxMapSize;
	int YMaxMapSize;
public:
	Map(string wayToFile);
	~Map();
};

