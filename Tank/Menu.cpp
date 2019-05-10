#include "Menu.h"
#include<iostream>

Menu::Menu()
{
	
}

Menu::~Menu()
{
}

void Menu::Init(Platform * platform)
{
	std::cout << " Menu Init" << std::endl;
	this->platform = platform;
	background = new Image();
	background->LoadImage("../Assets/Images/background.png");
}

void Menu::Draw()
{
	platform->RenderClear();
	std::cout << " Menu Draw" << std::endl;
	platform->RenderImage(background, 0, 0);
	platform->RenderPresent();
}

void Menu::Input()
{
	std::cout << " Menu Input" << std::endl;
}

void Menu::Update()
{
	std::cout << " Menu Update" << std::endl;
}

void Menu::Close()
{
	std::cout << " Close Init" << std::endl;
}