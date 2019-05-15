#pragma once
#include "Platform.h"
class GameObject
{
public:
	virtual void Init(Platform *platform) = 0;
	virtual void Draw() = 0;
};

