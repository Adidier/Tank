#pragma once
#include "GameState.h"
#include "Image.h"

class Menu : public GameState
{
private:
	Platform *platform;
	Image *background;
public:
	Menu();
	~Menu();
	void Init(Platform * platform) override;
	void Draw() override;
	void Input() override;
	void Update() override;
	void Close() override;
};

