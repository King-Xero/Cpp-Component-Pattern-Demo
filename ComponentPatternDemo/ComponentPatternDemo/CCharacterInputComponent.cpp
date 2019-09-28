#include "CCharacterInputComponent.h"
#include "EJoystickDirection.h"
#include "CInputController.h"
#include "CGameObject.h"

void CCharacterInputComponent::Update(CGameObject& gameObject)
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
