#pragma once
#include "GameState.h"
class Game : public GameState
{
public:
	Game();
	~Game();
	void Init(Platform * platform) override;
	void Draw() override;
	void Input() override;
	void Update() override;
	void Close() override;
};

