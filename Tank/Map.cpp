#include "Map.h"

Map::Map()
{
	float r = 2;
	tiles.push_back(new Tile(0, 0, r));
	tiles.push_back(new Tile(0, 32, r));
}

void Map::Init(Platform *platform)
{
	this->platform = platform;
	for (auto tile : tiles)
	{
		tile->Init(platform);
	}
}
void Map::Draw()
{
	for (auto tile : tiles)
	{
		tile->Draw();
	}
}

Map::~Map()
{
}
