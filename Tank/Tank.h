#pragma once
#include "GameObject.h"
#include "Image.h"
#include <list>

class Tank:GameObject
{
public:
	Tank();
	~Tank();
	void Draw() override;
	void Init(Platform *platform) override;
	void Input(int keInput);
	void Update() override;
	bool Collision();
	float GetRadius();
	float GetAngle();
	int GetPositionX();
	int GetPositionY();
	void SetPool(std::list<GameObject *> *bulletPool);
private:
	float angle;
	int positionX, positionY;
	Image *image;
	Platform *platform;
	float radius;
	int energy;

	bool tileCollision;
	std::list<GameObject *> *bulletPool;
};

