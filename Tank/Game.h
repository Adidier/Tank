#pragma once
#include "GameState.h"
#include "Tank.h"
#include"HeavyTank.h"
#include "Bullet.h"
#include "Map.h"

class Game : public GameState
{
private:
	Platform * platform;
	Tank *player;
	HeavyTank *enemy;
	Bullet *bullet;
	Map *map;


public:
	Game();
	~Game();
	void Init(Platform * platform, GameStateManager *manager) override;
	void Draw() override;
	bool Input(int keyInput) override;
	void Update() override;
	void Close() override;
};

