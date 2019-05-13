#pragma once
#include "GameState.h"
class Game : public GameState
{
public:
	Game();
	~Game();
	void Init(Platform * platform) override;
	void Draw() override;
	bool Input(int keyInput) override;
	void Update() override;
	void Close() override;
};

