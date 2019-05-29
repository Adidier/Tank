#include "Tile.h"

Tile::Tile(int positionX, int positionY, float radius)
{
	this->positionX = positionX;
	this->positionY = positionY;
	this->radius = radius;
}

void Tile::Init(Platform *platform)
{
	image = new Image();
	image->LoadImage("../Assets/Images/Tile.png");
	this->platform = platform;
}

void Tile::Draw()
{
	platform->RenderImage(image, positionX, positionY, 0);
}

void Tile::Update()
{

}

Tile::~Tile()
{
}
