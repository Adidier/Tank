#include "Platform.h"
#include "SDL.h"
#include<iostream>

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

//void Platform::RenderImage(Image *image, int x, int y)
//{
//	renderTexture(image, x, y);
//}
//
//void Platform::RenderImage(Image *image, int x, int y, double angle)
//{
//	renderTexture(image, x, y, angle);
//}


Platform::~Platform()
{
}
