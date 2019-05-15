#pragma once
#include "GameState.h"
class Game : public GameState
{
private:
	Platform * platform;
	Image *player;
	int playerX, playerY;
public:
	Game();
	~Game();
	void Init(Platform * platform, GameStateManager *manager) override;
	void Draw() override;
	bool Input(int keyInput) override;
	void Update() override;
	void Close() override;
};

