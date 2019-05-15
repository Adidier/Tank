#include "Platform.h"
#include "SDL.h"
#include<iostream>
#include "GameState.h"

SDL_Renderer *Platform::renderer;

Platform::Platform(std::string name)
{
	width = 640;
	height = 480;

	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		std::cout << "SDL_Init";
		return;
	}
	window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
	if (window == nullptr) {
		std::cout << "CreateWindow";
		SDL_Quit();
		return;
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (renderer == nullptr) {
		std::cout << "CreateRenderer";
		SDL_Quit();
		return;
	}
}

void Platform::RenderClear()
{
	SDL_RenderClear(renderer);
}

void Platform::RenderPresent()
{
	SDL_RenderPresent(renderer);
}

void Platform::RenderImage(Image *image, int x, int y)
{
	RenderTexture(image, x, y,0);
}

void Platform::RenderTexture(Image * image,int x,int y, double a)
{
	SDL_Rect srcrect;
	srcrect.x = x;
	srcrect.y = y;
	srcrect.w = image->GetWidth();
	srcrect.h = image->GetHeight();
	SDL_RenderCopyEx(renderer, image->GetTexture()
		, NULL,&srcrect, a, NULL, SDL_FLIP_NONE);
}

Platform::~Platform()
{
}

void Platform::CheckEvent(GameState *obj, 
	bool (GameState::*f)(int))
{
	SDL_Event e;
	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_KEYDOWN) {
			(obj->*f)(e.key.keysym.sym);
		}
	}
}