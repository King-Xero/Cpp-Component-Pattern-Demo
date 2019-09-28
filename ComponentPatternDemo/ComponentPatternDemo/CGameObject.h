#pragma once
#include "SCollisionBounds.h"
#include "CSprite.h"
#include "CInputComponent.h"

class CGraphics;
class CCollisionSystem;

class CGameObject
{
public:
	CGameObject() : m_iVelocity(0), m_iX(0), m_iY(0) {  }

	void Update(CCollisionSystem& collisionSystem, CGraphics& graphics);

	int m_iVelocity;
	int m_iX;
	int m_iY;
	
private:
	CInputComponent m_InputComponent;
	
	SCollisionBounds m_CollisionBounds;

	CSprite m_SpriteIdle;
	CSprite m_SpriteWalkRight;
	CSprite m_SpriteWalkLeft;
};
