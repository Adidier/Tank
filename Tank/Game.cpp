#include "Game.h"
#include<iostream>

Game::Game()
{
}


Game::~Game()
{
}


void Game::Init(Platform * platform)
{
	std::cout << " Game Init" << std::endl;
}

void Game::Draw()
{
	std::cout << " Game Draw" << std::endl;
}

void Game::Input()
{
	std::cout << " Game Input" << std::endl;
}

void Game::Update()
{
	std::cout << " Game Update" << std::endl;
}

void Game::Close()
{
	std::cout << " Close Init" << std::endl;
}