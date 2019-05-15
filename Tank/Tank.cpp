#include "Tank.h"
#include "Platform.h"


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
	angle = 45;
	this->platform = platform;
}

void Tank::Draw()
{
	platform->RenderImage(image, positionX, positionY, angle);
}
