#pragma once
#include "CSprite.h"

class CGraphics;
class CGameObject;

class CGraphicsComponent
{
public:
	void Update(CGameObject& gameObject, CGraphics& graphics);

private:
	CSprite m_SpriteIdle;
	CSprite m_SpriteWalkRight;
	CSprite m_SpriteWalkLeft;
};
