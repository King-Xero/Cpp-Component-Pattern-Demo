#pragma once
#include "SCollisionBounds.h"

class CGameObject;
class CCollisionSystem;

class CPhysicsComponent
{
public:
	void Update(CGameObject& gameObject, CCollisionSystem& collisionSystem);

private:
	SCollisionBounds m_CollisionBounds;
};
