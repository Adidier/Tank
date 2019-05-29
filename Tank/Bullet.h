#pragma once
#include "GameObject.h"

class Bullet : public GameObject
{
public:
	void Init(Platform *platform) override;
	void Draw() override;
	Bullet(int x, int y, float a, float r, float v);
	~Bullet();
	void Update() override;
private:
	float angle;
	Image *image;
	Platform *platform;
	float velocity;
};

