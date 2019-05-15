#pragma once
#include "GameState.h"
#include "Tank.h"
class Game : public GameState
{
private:
	Platform * platform;
	Tank *player;


public:
	Game();
	~Game();
	void Init(Platform * platform, GameStateManager *manager) override;
	void Draw() override;
	bool Input(int keyInput) override;
	void Update() override;
	void Close() override;
};

