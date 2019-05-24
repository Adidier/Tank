#pragma once
#include "GameObject.h"

class Tile : public GameObject
{
private:
	int positionX, positionY;
	Image *image;
	Platform *platform;
	float radius;
public:
	Tile(int positionX, int positionY, float radius);
	void Init(Platform *platform) override;
	void Draw() override;
	float GetRadius();
	int GetPositionX();
	int GetPositionY();
	~Tile();
};

