#pragma once
#include "Image.h"
#include "Platform.h"
#include "GameObject.h"
#include <list>

class HeavyTank : public GameObject
{
private:
	float angle;
	Image *image;
	Platform *platform;
	std::list<GameObject *> *bulletPool;

public:
	int energy;
	HeavyTank();
	void Init(Platform *platform) override;
	void Update() override;
	void Draw() override;
	~HeavyTank();
	bool Collision();
	void SetPool(std::list<GameObject *> *bulletPool);
};

