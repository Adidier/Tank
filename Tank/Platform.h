#pragma once
#include <string>
#include "SDL.h"
#include "Image.h"
class Platform
{
private:
	int width;
	int height;
	SDL_Window *window;
public:
	static SDL_Renderer *renderer;
	Platform(std::string name);
	~Platform();
	void RenderClear();
	void RenderImage(Image *image, int x, int y);
	void RenderPresent();
private:
	void RenderTexture(Image * image, int x, int y, double a);
};

