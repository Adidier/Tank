#pragma once
#include "GameState.h"
#include <stack>

class GameStateManager
{
private:
	std::stack<GameState *> states;
public:
	GameStateManager();
	~GameStateManager();
	void GameLoop();
	void SetState(GameState *state);
};

