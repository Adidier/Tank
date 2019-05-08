#pragma once
#include <string>
#include "SDL.h"

class Platform
{
private:
	int width;
	int height;
	SDL_Window *window;
	SDL_Renderer *renderer;
public:
	Platform(std::string name);
	~Platform();
	void RenderClear();
	//void RenderImage(Image *image, int x, int y);
	//void RenderImage(Image *image, int x, int y, double angle);
	void RenderPresent();
};

