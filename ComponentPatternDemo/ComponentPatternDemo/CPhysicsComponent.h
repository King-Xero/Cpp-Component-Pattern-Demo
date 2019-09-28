#pragma once
#include "SCollisionBounds.h"

class CGameObject;
class CCollisionSystem;

class CPhysicsComponent
{
public:
	virtual ~CPhysicsComponent() = default;
	virtual void Update(CGameObject& gameObject, CCollisionSystem& collisionSystem) = 0;
};
