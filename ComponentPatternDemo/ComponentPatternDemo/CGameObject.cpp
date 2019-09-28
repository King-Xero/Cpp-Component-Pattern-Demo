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
	m_GraphicsComponent.Update(*this, graphics);
}
