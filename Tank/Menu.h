#pragma once
#include "GameState.h"
class Menu : public GameState
{
public:
	Menu();
	~Menu();
	void Init() override;
	void Draw() override;
	void Input() override;
	void Update() override;
};

