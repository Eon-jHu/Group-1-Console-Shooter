#pragma once

#include "GameObject.h"

class CProjectile : public CGameObject
{
public:
	void Initialisation(int _iPositionX, int _iPositionY, char _cToken);
	void ProcessDraw(Controller& _Controller);
	void ProcessInput(MovementInput& _Input);
	void ProcessUpdate();
	bool m_bProjectileLaunched = false;
	MovementInput m_InputDirection;
};