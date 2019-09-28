#pragma once
#include "CGraphicsComponent.h"

class CCharacterGraphicsComponent : CGraphicsComponent
{
public:
	void Update(CGameObject& gameObject, CGraphics& graphics) override;

private:
	CSprite m_SpriteIdle;
	CSprite m_SpriteWalkRight;
	CSprite m_SpriteWalkLeft;
};
