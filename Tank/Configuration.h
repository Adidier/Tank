#pragma once
#include "GameState.h"
class Configuration : public GameState
{
public:
	Configuration();
	~Configuration();
	void Init(Platform * platform, GameStateManager *manager) override;
	void Draw() override;
	bool Input(int keyInput) override;
	void Update() override;
	void Close() override;
};

