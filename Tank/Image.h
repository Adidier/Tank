#pragma once
#include "SDL.h"
#include <iostream>

class Image
{
private:
	SDL_Texture *image;
	std::string name;
public:
	void LoadImage(std::string name);
	SDL_Texture *GetTexture();
};

