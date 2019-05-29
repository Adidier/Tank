#include "Tank.h"
#include "Platform.h"
#include "Bullet.h"
#include <math.h>
#include "Collision.h"

Tank::Tank()
{
}

Tank::~Tank()
{
}
void Tank::SetPool(std::list<GameObject *> *bulletPool)
{
	this->bulletPool = bulletPool;
}

void Tank::Init(Platform *platform)
{
	image = new Image();
	image->LoadImage("../Assets/Images/Tank.png");
	positionX = 100;
	positionY = 100;
	angle = 100;
	this->platform = platform;
	radius = 40;
	energy = 100;
}

void Tank::Draw()
{
	if (energy != 0)
	{
		platform->RenderImage(image, positionX - image->GetWidth() / 2, positionY - image->GetHeight() / 2, angle);
	}
}

void Tank::Collision()
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

void Tank::Update()
{
	Collision();
}

void Tank::Input(int keyInput)
{
	if (keyInput == 32)
	{
		Bullet * newBullet = new Bullet(positionX, positionY,angle,1,1);
		newBullet->Init(platform);

		bulletPool->push_back(newBullet);

	}

	if (keyInput == 1073741904)
	{
		angle -= 5;
	}
	else if (keyInput == 1073741903)
	{
		angle += 5;
	}

	if (keyInput == 1073741906)
	{
		positionX += (float)cos((angle * M_PI)/ 180) * 5;
		positionY += (float)sin((angle * M_PI) / 180) * 5;
	}
	else if (keyInput == 1073741905)
	{
		positionX -= (float)cos((angle * M_PI) / 180) * 5;
		positionY -= (float)sin((angle * M_PI) / 180) * 5;
	}
}

float Tank::GetRadius()
{
	return radius;
}

float Tank::GetAngle()
{
	return angle;
}

int Tank::GetPositionX() 
{
	return positionX;
}

int Tank::GetPositionY() 
{
	return positionY;
}