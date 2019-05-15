#pragma once
#include "GameObject.h"
#include "Image.h"
class Tank:GameObject
{
public:
	Tank();
	~Tank();
	void Draw() override;
	void Init(Platform *platform) override;
private:
	float angle;
	int positionX, positionY;
	Image *image;
	Platform *platform;
	
};

