#include "Menu.h"
#include "Game.h"
#include<iostream>

Menu::Menu()
{
	
}

Menu::~Menu()
{
}

void Menu::Init(Platform * platform, GameStateManager *manager)
{
	std::cout << " Menu Init" << std::endl;
	this->platform = platform;
	this->manager = manager;
	background = new Image();
	background->LoadImage("../Assets/Images/background.png");
}

void Menu::Draw()
{
	platform->RenderClear();
	std::cout << " Menu Draw" << std::endl;
	platform->RenderImage(background, 0, 0, 0);
	platform->RenderPresent();
}

bool Menu::Input(int keyInput)
{
	std::cout << " Menu Input" << std::endl;
	if (keyInput == 27)
	{
		exit(1);
	}
	else
	{ 
		manager->SetState(new Game());
	}
	return false;
}

void Menu::Update()
{
	std::cout << " Menu Update" << std::endl;
}

void Menu::Close()
{
	std::cout << " Close Init" << std::endl;
}