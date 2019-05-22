#include "Tank.h"
#include "Platform.h"
#include <math.h>

Tank::Tank()
{
}


Tank::~Tank()
{
}

void Tank::Init(Platform *platform)
{
	image = new Image();
	image->LoadImage("../Assets/Images/Tank.png");
	positionX = 100;
	positionY = 100;
	angle = 0;
	this->platform = platform;
	radius = 40;
}

void Tank::Draw()
{
	platform->RenderImage(image, positionX, positionY, angle);
}

void Tank::Input(int keyInput)
{
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
int Tank::GetPositionX() 
{
	return positionX;
}
int Tank::GetPositionY() 
{
	return positionY;
}