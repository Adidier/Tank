#include "Game.h"
#include<iostream>

Game::Game()
{
}


Game::~Game()
{
}


void Game::Init(Platform * platform, GameStateManager *manager)
{
	this->platform = platform;
	std::cout << " Game Init" << std::endl;
	player = new Image();
	player->LoadImage("../Assets/Images/Tank.png");
	playerX = 100;
	playerY = 100;
}

void Game::Draw()
{
	std::cout << " Game Draw" << std::endl;
	platform->RenderClear();	
	platform->RenderImage(player, playerX, playerY);
	platform->RenderPresent();
}

bool Game::Input(int keyInput)
{
	if (keyInput == 1073741906)
	{
		playerY--;
	}
	else if (keyInput == 1073741905)
	{
		playerY++;
	}
	std::cout << " Game Input" << std::endl;
	return false;
}

void Game::Update()
{
	std::cout << " Game Update" << std::endl;
}

void Game::Close()
{
	std::cout << " Close Init" << std::endl;
}