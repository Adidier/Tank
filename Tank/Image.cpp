#include "Image.h"
#include "SDL_image.h"

void Image::LoadImage(std::string name, SDL_Renderer *renderer)
{
	this->name = name;
	SDL_Surface* loadedSurface = IMG_Load(name.c_str());
	image = SDL_CreateTextureFromSurface(renderer, loadedSurface);
}

SDL_Texture *Image::getTexture() {
	return image;
}