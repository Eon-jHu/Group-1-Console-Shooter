#pragma once
#include "GameObject.h"

class CEnemyCharacter :
    public CGameObject
{
	void ProcessUpdate();
	void ProcessDraw(Controller& _Controller);
	void ProcessInput(MovementInput& _Input);
	bool m_bAlive = true;
	int m_iHitPoints = 5;
	class CProjectile* m_pProjectile = nullptr;
};

