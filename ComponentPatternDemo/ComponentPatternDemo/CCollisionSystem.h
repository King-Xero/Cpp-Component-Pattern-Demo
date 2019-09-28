#pragma once
#include "SCollisionBounds.h"

class CCollisionSystem
{
public:

	void CheckCollisions(const SCollisionBounds& collisionBounds, int mIX, int mIY, int mIVelocity);
};
