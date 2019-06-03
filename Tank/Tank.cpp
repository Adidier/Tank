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
	angle = 0;
	radius = image->GetHeight() / 2;
	this->platform = platform;
	energy = 100;
	tileCollision = false;
}

void Tank::Draw()
{
	if (energy != 0)
	{
		platform->RenderImage(image, positionX , positionY , angle);
		#ifdef _DEBUG_TANK_
			platform->DrawRect(positionX , positionY , image->GetWidth(), image->GetHeight());
		#endif
	}
}

bool Tank::Collision()
{
	for (auto object : *bulletPool)
	{
		if (Collision::BoxCollision(positionX, positionY,image->GetWidth(),image->GetHeight(),
			object->GetPositionX(), object->GetPositionY(), 32,32))
		{
			return true;
		}
	}
	return false;
}

void Tank::Update()
{
	
}

void Tank::Input(int keyInput)
{
	if (keyInput == 32)
	{
		Bullet * newBullet = new Bullet(positionX+image->GetWidth()/2, positionY + image->GetHeight() / 2,angle,1,1);
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

	if (keyInput == 1073741906 )
	{
		positionX += (float)cos((angle * M_PI)/ 180) * 5;
		if(Collision())
		{
			positionX -= (float)cos((angle * M_PI) / 180) * 7;
			return;
		}

		positionY += (float)sin((angle * M_PI) / 180) * 5;
		if (Collision())
		{
			positionY -= (float)sin((angle * M_PI) / 180) * 7;
			return;
		}

	}
	else if (keyInput == 1073741905)
	{
		positionX -= (float)cos((angle * M_PI) / 180) * 5;
		if (Collision())
		{
			positionX += (float)cos((angle * M_PI) / 180) * 7;
			return;
		}
		
		positionY -= (float)sin((angle * M_PI) / 180) * 5;
		if (Collision())
		{
			positionY += (float)sin((angle * M_PI) / 180) * 7;
			return;
		}
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