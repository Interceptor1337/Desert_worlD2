#include "stdafx.h"
#include "Map.h"


Map::Map(string wayToFile)
{
	ifstream fin(wayToFile);
	char wallTexture;
	char playerTexture;
	fin >> XMaxMapSize >> YMaxMapSize>>wallTexture>>playerTexture;
	
}

Map::~Map()
{
}
