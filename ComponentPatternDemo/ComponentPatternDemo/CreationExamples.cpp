#include "CreationExamples.h"
#include "CCharacter.h"
#include "CGameObject.h"
#include "CCharacterInputComponent.h"
#include "CCharacterPhysicsComponent.h"
#include "CCharacterGraphicsComponent.h"

void CreationExamples::CreateCharacters()
{
	auto character = new CCharacter();
	//To create a different type of character using the 'Character' class you would need to create a derived class and override its functions
	
	auto gameObjectCharacter = new CGameObject(new CCharacterInputComponent(), new CCharacterPhysicsComponent(),
	                                           new CCharacterGraphicsComponent());	
	//To create a different type of character using the 'GameObject class you would need to create a new component and pass the differing component during creation
}
