#include "Collision.h"
#include<math.h>

bool Collision::CircleCollision(float r1, float r2, int x1, int y1, int x2, int y2)
{
	float d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	if (d >= r1 + r2)
		return false;
	else
		return true;
}


