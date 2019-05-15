#pragma once
#include "Platform.h"

class Platform;
class GameStateManager;

class GameState
{
public:
	virtual void Init(Platform * platform, GameStateManager *manager) = 0;
	virtual void Draw() = 0;
	virtual bool Input(int keyInput) = 0;
	virtual void Update() = 0;
	virtual void Close() = 0;
};