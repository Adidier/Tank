#include "GameStateManager.h"

GameStateManager::GameStateManager()
{
}

GameStateManager::~GameStateManager()
{
}

void GameStateManager::GameLoop()
{
	while (true)
	{
		auto state= states.top();
		state->Input();
		state->Update();
		state->Draw();
	}
}

void GameStateManager::SetState(GameState *state)
{
	state->Init();
	states.push(state);
}