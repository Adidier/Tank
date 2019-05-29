#include "Game.h"
#include<iostream>
#include "Collision.h"

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
	player->SetPool(&bulletPool);
	enemy = new HeavyTank();
	enemy->Init(platform);
	enemy->SetPool(&bulletPool);
	bullet = new Bullet(100, 100, player->GetAngle(), 10, 1);
	bullet->Init(platform);
	map = new Map();
	map->SetPool(&bulletPool);
	map->Init(platform);

	this->platform = platform;
	std::cout << " Game Init" << std::endl;
}

void Game::Draw()
{
	std::cout << " Game Draw" << std::endl;
	platform->RenderClear();	
	player->Draw();
	enemy->Draw();
	
	for (auto object : bulletPool)
	{
		object->Draw();
	}

	map->Draw();
	platform->RenderPresent();
}

bool Game::Input(int keyInput)
{
	player->Input(keyInput);
	std::cout << " Game Input" << std::endl;
	return false;
}

void Game::Update()
{
	for (auto object : bulletPool)
	{
		object->Update();
	}

	enemy->Update();
	player->Update();

	std::cout << " Game Update" << std::endl;

}

void Game::Close()
{
	std::cout << " Close Init" << std::endl;
}