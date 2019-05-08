#pragma once
#include "GameState.h"
class Configuration : public GameState
{
public:
	Configuration();
	~Configuration();
	void Init() override;
	void Draw() override;
	void Input() override;
	void Update() override;
	void Close() override;
};

