#pragma once
#include "CInputComponent.h"

class CCharacterInputComponent : CInputComponent
{
public:
	void Update(CGameObject& gameObject) override;

private:
	static const int sk_iMOVEMENT_ACCELERATION = 3;
};
