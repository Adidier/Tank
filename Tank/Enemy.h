#pragma once
#include "Platform.h"

class Enemy
{
public:
	virtual void Load(Platform *platform) = 0;
	virtual void Upadate() = 0;
	virtual void Draw() = 0;
};

