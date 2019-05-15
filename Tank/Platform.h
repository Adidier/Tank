#pragma once
#include <string>
#include "SDL.h"
#include "Image.h"
#include "GameState.h"

class GameState;

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
	void RenderImage(Image *image, int x, int y, float angle);
	void RenderPresent();
	void CheckEvent(GameState *obj, bool (GameState::*f)(int));
private:
	void RenderTexture(Image * image, int x, int y, double a);

};

