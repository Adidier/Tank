#pragma once
#include "GameObject.h"

class Bullet : public GameObject
{
public:
	void Init(Platform *platform) override;
	void Draw() override;
	Bullet(int x, int y, float a, float r, float v);
	~Bullet();
	float GetRadius();
	int GetPositionX();
	int GetPositionY();
	void Update();
private:
	float angle;
	int positionX, positionY;
	Image *image;
	Platform *platform;
	float radius;
	float velocity;
};

