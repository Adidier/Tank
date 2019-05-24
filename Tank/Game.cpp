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
	enemy = new HeavyTank();
	enemy->Load(platform);
	bullet = new Bullet(100, 100, player->GetAngle(), 10, 1);
	bullet->Init(platform);
	map = new Map();
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
	bullet->Draw();
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
	bullet->Update();

	std::cout << " Game Update" << std::endl;
	if (Collision::CircleCollision(player->GetRadius(), enemy->GetRadius(),
		player->GetPositionX(), player->GetPositionY(),
		enemy->GetPositionX(), enemy->GetPositionY()))
	{
		enemy->energy = 0;
	}
}

void Game::Close()
{
	std::cout << " Close Init" << std::endl;
}