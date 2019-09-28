#pragma once
#include "SCollisionBounds.h"
#include "CSprite.h"

class CGraphics;
class CCollisionSystem;

class CGameObject
{
public:
	CGameObject() : m_iVelocity(0), m_iX(0), m_iY(0) {  }

	void Update(CCollisionSystem& collisionSystem, CGraphics& graphics);

private:
	static const int sk_iMOVEMENT_ACCELERATION = 3;
	int m_iVelocity;
	int m_iX;
	int m_iY;

	SCollisionBounds m_CollisionBounds;

	CSprite m_SpriteIdle;
	CSprite m_SpriteWalkRight;
	CSprite m_SpriteWalkLeft;
};
