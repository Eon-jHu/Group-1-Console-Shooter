#pragma once

#include "GameObject.h"

class CPlayerCharacter : public CGameObject
{
public:
	void ProcessDraw(Controller& _Controller);
	void ProcessInput(MovementInput& _Input);
	class CProjectile* m_pProjectile = nullptr;
};