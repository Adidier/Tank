#pragma once
#include"Tile.h"
#include"Platform.h"
#include<vector>

class Map : GameObject
{
private:
	std::vector<Tile*> tiles;
	Platform *platform;
public:
	Map();
	~Map();
	void Init(Platform *platform) override;
	void Draw() override;
};

