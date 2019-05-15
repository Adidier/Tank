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
	player = new Tank();
	player->Init(platform);
	this->platform = platform;
	std::cout << " Game Init" << std::endl;
}

void Game::Draw()
{
	std::cout << " Game Draw" << std::endl;
	platform->RenderClear();	
	player->Draw();
	platform->RenderPresent();
}

bool Game::Input(int keyInput)
{
	//if (keyInput ==	1073741904)
	//{
	//	angle -= 5;
	//}
	//else if	(keyInput == 1073741903) 
	//{
	//	angle += 5;
	//}

	//if (keyInput == 1073741906)
	//{
	//	playerY--;
	//}
	//else if (keyInput == 1073741905)
	//{
	//	playerY++;
	//}
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