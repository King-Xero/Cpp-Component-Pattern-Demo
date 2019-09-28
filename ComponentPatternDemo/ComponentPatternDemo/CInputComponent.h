#pragma once

class CGameObject;

class CInputComponent
{
public:
	virtual ~CInputComponent() = default;
	virtual void Update(CGameObject& gameObject) = 0;
};
