#include "PlayerCharacter.h"
//#include "Projectile.h"

void CPlayerCharacter::ProcessDraw(Controller& _Controller)
{
	CGameObject::ProcessDraw(_Controller);
}

void CPlayerCharacter::ProcessInput(MovementInput& _Input)
{
//	CGameObject::ProcessInput(_Input);
//	if (_Input.m_bSpace_held && !m_pProjectile->m_bProjectileLaunched)
//	{
//		m_pProjectile->m_iPositionX = m_iPositionX;
//		m_pProjectile->m_iPositionY = m_iPositionY;
//	}
}
