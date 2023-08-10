#include "Projectile.h"

void CProjectile::Initialisation(int _iPositionX, int _iPositionY, char _cToken)
{
	CGameObject::Initialisation(_iPositionX, _iPositionY, _cToken);
	m_InputDirection.m_eAxisHorizontal = EInputAxis::AXIS_INC;	// Starts off shooting to the right by default
}

void CProjectile::ProcessDraw(Controller& _Controller)
{
	if (m_bProjectileLaunched)
	{
		CGameObject::ProcessDraw(_Controller);
	}
}

void CProjectile::ProcessInput(MovementInput& _Input)
{
	//CGameObject::ProcessInput(_Input);
	if (!m_bProjectileLaunched)
	{
		if (_Input.m_eAxisHorizontal != EInputAxis::AXIS_NONE)
		{
			m_InputDirection.m_eAxisHorizontal = _Input.m_eAxisHorizontal;
			m_InputDirection.m_eAxisVertical = _Input.m_eAxisVertical;
		}
		if (_Input.m_eAxisVertical != EInputAxis::AXIS_NONE)
		{
			m_InputDirection.m_eAxisHorizontal = _Input.m_eAxisHorizontal;
			m_InputDirection.m_eAxisVertical = _Input.m_eAxisVertical;
		}
	}
	if (_Input.m_bSpace_held)
	{
		m_bProjectileLaunched = true;
	}
}

void CProjectile::ProcessUpdate()
{
	// translate the player's projectile
	if (m_bProjectileLaunched)
	{
		m_iPositionX += m_InputDirection.m_eAxisHorizontal;
		m_iPositionY += m_InputDirection.m_eAxisVertical;

		if ((m_iPositionX > 20) || (m_iPositionX < 0))
		{
			m_bProjectileLaunched = false;
		}
		if ((m_iPositionY > 20) || (m_iPositionY < 0))
		{
			m_bProjectileLaunched = false;
		}
	}
}