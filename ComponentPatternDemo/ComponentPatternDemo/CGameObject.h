#pragma once
#include "CInputComponent.h"
#include "CPhysicsComponent.h"
#include "CGraphicsComponent.h"

class CGraphics;
class CCollisionSystem;

class CGameObject
{
public:
	CGameObject()
	: m_iVelocity(0)
	, m_iX(0)
	, m_iY(0)
	, m_InputComponent(nullptr)
	, m_PhysicsComponent(nullptr)
	, m_GraphicsComponent(nullptr)
	{
	}

	CGameObject(CInputComponent* inputComponent, CPhysicsComponent* physicsComponent, CGraphicsComponent* graphicsComponent)
	: m_iVelocity(0)
	, m_iX(0)
	, m_iY(0)
	, m_InputComponent(inputComponent)
	, m_PhysicsComponent(physicsComponent)
	, m_GraphicsComponent(graphicsComponent)
	{		
	}

	void Update(CCollisionSystem& collisionSystem, CGraphics& graphics);

	int m_iVelocity;
	int m_iX;
	int m_iY;
	
private:
	CInputComponent* m_InputComponent;
	CPhysicsComponent* m_PhysicsComponent;
	CGraphicsComponent* m_GraphicsComponent;
};
