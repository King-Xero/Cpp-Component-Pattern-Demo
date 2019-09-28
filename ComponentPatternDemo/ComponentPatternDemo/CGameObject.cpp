#include "CGameObject.h"
#include "CCollisionSystem.h"
#include "CGraphics.h"

void CGameObject::Update(CCollisionSystem& collisionSystem, CGraphics& graphics)
{
	//Handle input
	m_InputComponent.Update(*this);

	//Handle physics
	m_PhysicsComponent.Update(*this, collisionSystem);

	//Handle graphics
	CSprite* sprite = &m_SpriteIdle;
	if (m_iVelocity > 0)
	{
		sprite = &m_SpriteWalkRight;
	}
	else if (m_iVelocity < 0)
	{
		sprite = &m_SpriteWalkLeft;
	}
	graphics.Draw(*sprite, m_iX, m_iY);
}
