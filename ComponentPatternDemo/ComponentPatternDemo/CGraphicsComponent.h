#pragma once
#include "CSprite.h"

class CGraphics;
class CGameObject;

class CGraphicsComponent
{
public:
	virtual ~CGraphicsComponent() = default;
	virtual void Update(CGameObject& gameObject, CGraphics& graphics) = 0;
};
