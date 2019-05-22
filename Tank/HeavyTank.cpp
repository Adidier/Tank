#include "HeavyTank.h"



HeavyTank::HeavyTank()
{
}

void HeavyTank::Load(Platform *platform)
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

void HeavyTank::Upadate()
{

}

void HeavyTank:: Draw()
{
	if (energy > 0)
	{
		platform->RenderImage(image, positionX, positionY, angle);
	}
}


HeavyTank::~HeavyTank()
{
}
float HeavyTank::GetRadius()
{
	return radius;
}
int HeavyTank::GetPositionX()
{
	return positionX;
}
int HeavyTank::GetPositionY()
{
	return positionY;
}

