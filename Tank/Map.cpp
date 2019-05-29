#include "Map.h"

Map::Map()
{
	float r = 2;
	tiles.push_back(new Tile(0, 0, r));
	tiles.push_back(new Tile(32, 0, r));
	tiles.push_back(new Tile(64, 0, r));
	tiles.push_back(new Tile(96, 0, r));
	tiles.push_back(new Tile(128, 0, r));
	tiles.push_back(new Tile(160, 0, r));
	tiles.push_back(new Tile(192, 0, r));
	tiles.push_back(new Tile(224, 0, r));
	tiles.push_back(new Tile(256, 0, r));
	tiles.push_back(new Tile(288, 0, r));
	tiles.push_back(new Tile(320, 0, r));
	tiles.push_back(new Tile(352, 0, r));
	tiles.push_back(new Tile(384, 0, r));
	tiles.push_back(new Tile(416, 0, r));
	tiles.push_back(new Tile(448, 0, r));
	tiles.push_back(new Tile(480, 0, r));
	tiles.push_back(new Tile(512, 0, r));
	tiles.push_back(new Tile(544, 0, r));
	tiles.push_back(new Tile(576, 0, r));
	tiles.push_back(new Tile(608, 0, r));

	tiles.push_back(new Tile(0, 448, r));
	tiles.push_back(new Tile(32, 448, r));
	tiles.push_back(new Tile(64, 448, r));
	tiles.push_back(new Tile(96, 448, r));
	tiles.push_back(new Tile(128, 448, r));
	tiles.push_back(new Tile(160, 448, r));
	tiles.push_back(new Tile(192, 448, r));
	tiles.push_back(new Tile(224, 448, r));
	tiles.push_back(new Tile(256, 448, r));
	tiles.push_back(new Tile(288, 448, r));
	tiles.push_back(new Tile(320, 448, r));
	tiles.push_back(new Tile(352, 448, r));
	tiles.push_back(new Tile(384, 448, r));
	tiles.push_back(new Tile(416, 448, r));
	tiles.push_back(new Tile(448, 448, r));
	tiles.push_back(new Tile(480, 448, r));
	tiles.push_back(new Tile(512, 448, r));
	tiles.push_back(new Tile(544, 448, r));
	tiles.push_back(new Tile(576, 448, r));
	tiles.push_back(new Tile(608, 448, r));

	tiles.push_back(new Tile(608, 32, r));
	tiles.push_back(new Tile(608, 64, r));
	tiles.push_back(new Tile(608, 96, r));
	tiles.push_back(new Tile(608, 128, r));
	tiles.push_back(new Tile(608, 160, r));
	tiles.push_back(new Tile(608, 192, r));
	tiles.push_back(new Tile(608, 224, r));
	tiles.push_back(new Tile(608, 256, r));
	tiles.push_back(new Tile(608, 288, r));
	tiles.push_back(new Tile(608, 320, r));
	tiles.push_back(new Tile(608, 352, r));
	tiles.push_back(new Tile(608, 384, r));
	tiles.push_back(new Tile(608, 416, r));
	tiles.push_back(new Tile(608, 448, r));

	tiles.push_back(new Tile(0, 32, r));
	tiles.push_back(new Tile(0, 64, r));
	tiles.push_back(new Tile(0, 96, r));
	tiles.push_back(new Tile(0, 128, r));
	tiles.push_back(new Tile(0, 160, r));
	tiles.push_back(new Tile(0, 192, r));
	tiles.push_back(new Tile(0, 224, r));
	tiles.push_back(new Tile(0, 256, r));
	tiles.push_back(new Tile(0, 288, r));
	tiles.push_back(new Tile(0, 320, r));
	tiles.push_back(new Tile(0, 352, r));
	tiles.push_back(new Tile(0, 384, r));
	tiles.push_back(new Tile(0, 416, r));
	tiles.push_back(new Tile(0, 448, r));



	tiles.push_back(new Tile(192, 160, r));
	tiles.push_back(new Tile(192, 192, r));
	tiles.push_back(new Tile(192, 224, r));
	tiles.push_back(new Tile(192, 256, r));
	tiles.push_back(new Tile(192, 288, r));
	tiles.push_back(new Tile(192, 320, r));

	tiles.push_back(new Tile(416, 160, r));
	tiles.push_back(new Tile(416, 192, r));
	tiles.push_back(new Tile(416, 224, r));
	tiles.push_back(new Tile(416, 256, r));
	tiles.push_back(new Tile(416, 288, r));
	tiles.push_back(new Tile(416, 320, r));


	tiles.push_back(new Tile(0, 0, r));
	tiles.push_back(new Tile(0, 32, r));
}

void Map::SetPool(std::list<GameObject *> *bulletPool)
{
	this->bulletPool = bulletPool;
}

void Map::Init(Platform *platform)
{
	this->platform = platform;
	for (auto tile : tiles)
	{
		tile->Init(platform);
		bulletPool->push_back(tile);
	}
}
void Map::Update()
{

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
