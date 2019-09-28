#include "CInputComponent.h"
#include "CGameObject.h"
#include "CInputController.h"
#include "EJoystickDirection.h"

void CInputComponent::Update(CGameObject& gameObject)
{
	//Handle input
	switch (CInputController::GetJoyStickDirection())
	{
	case EJoystickDirection::EDir_None:
		break;
	case EJoystickDirection::EDir_Left:
		gameObject.m_iVelocity -= sk_iMOVEMENT_ACCELERATION;
		break;
	case EJoystickDirection::EDir_Right:
		gameObject.m_iVelocity += sk_iMOVEMENT_ACCELERATION;
		break;
	}
}
