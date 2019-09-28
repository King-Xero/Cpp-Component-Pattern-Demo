#pragma once

class CGameObject;

class CInputComponent
{
public:
	void Update(CGameObject& gameObject);

private:
	static const int sk_iMOVEMENT_ACCELERATION = 3;
};
