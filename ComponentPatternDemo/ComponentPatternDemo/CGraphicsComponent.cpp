#include "CGraphicsComponent.h"
#include "CGameObject.h"
#include "CGraphics.h"

void CGraphicsComponent::Update(CGameObject& gameObject, CGraphics& graphics)
{
	//Handle graphics
	CSprite* sprite = &m_SpriteIdle;
	if (gameObject.m_iVelocity > 0)
	{
		sprite = &m_SpriteWalkRight;
	}
	else if (gameObject.m_iVelocity < 0)
	{
		sprite = &m_SpriteWalkLeft;
	}
	graphics.Draw(*sprite, gameObject.m_iX, gameObject.m_iY);
}
