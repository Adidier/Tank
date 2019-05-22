#pragma once
#include "Enemy.h"
#include "Image.h"
#include "Platform.h"

class HeavyTank :
	public Enemy
{
private:
	float angle;
	int positionX, positionY;
	Image *image;
	Platform *platform;
	float radius;
	
public:
	int energy;
	HeavyTank();
	void Load(Platform *platform) override;
	void Upadate() override;
	void Draw() override;
	~HeavyTank();
	float GetRadius();
	int GetPositionX();
	int GetPositionY();
};

