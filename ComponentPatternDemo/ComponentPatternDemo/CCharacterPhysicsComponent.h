#pragma once
#include "CPhysicsComponent.h"

class CCharacterPhysicsComponent : CPhysicsComponent
{
public:
	void Update(CGameObject& gameObject, CCollisionSystem& collisionSystem) override;

private:
	SCollisionBounds m_CollisionBounds;
};
