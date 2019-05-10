#pragma once
#include "Platform.h"

class GameState
{
public:
	virtual void Init(Platform * platform) = 0;
	virtual void Draw() = 0;
	virtual void Input() = 0;
	virtual void Update() = 0;
	virtual void Close() = 0;
};