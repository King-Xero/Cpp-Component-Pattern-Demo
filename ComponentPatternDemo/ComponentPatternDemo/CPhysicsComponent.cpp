#include "CPhysicsComponent.h"
#include "CGameObject.h"
#include "CCollisionSystem.h"

void CPhysicsComponent::Update(CGameObject& gameObject, CCollisionSystem& collisionSystem)
{
	//Handle physics
	gameObject.m_iX += gameObject.m_iVelocity;
	collisionSystem.CheckCollisions(m_CollisionBounds, gameObject.m_iX, gameObject.m_iY, gameObject.m_iVelocity);
}
