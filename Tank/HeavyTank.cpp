#include "HeavyTank.h"

#include "Collision.h"

#include <list>

HeavyTank::HeavyTank()
{
}

void HeavyTank::Init(Platform *platform)
{
	image = new Image();
	image->LoadImage("../Assets/Images/HeavyTank.png");
	positionX = 200;
	positionY = 200;
	angle = 0;
	this->platform = platform;
	radius = 40;
	energy = 100;
}

void HeavyTank::Update()
{
	Collision();
}

void HeavyTank:: Draw()
{
	if (energy > 0)
	{
		platform->RenderImage(image, positionX, positionY, angle);
	}
}

void HeavyTank::SetPool(std::list<GameObject *> *bulletPool)
{
	this->bulletPool = bulletPool;
}

void HeavyTank::Collision()
{
	for (auto object : *bulletPool)
	{
		if (Collision::CircleCollision(GetRadius(), object->GetRadius(),
			GetPositionX(), GetPositionY(),
			object->GetPositionX(), object->GetPositionY()))
		{
			energy = 0;
		}
	}
}

HeavyTank::~HeavyTank()
{
}