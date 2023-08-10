#include "GameObject.h"

CGameObject::CGameObject()
{
}

void CGameObject::Initialisation(int _iPositionX, int _iPositionY, char _cToken)
{
	m_iPositionX = _iPositionX;
	m_iPositionY = _iPositionY;
	m_cToken = _cToken;
}

void CGameObject::ProcessInput(MovementInput& _Input)
{
}

void CGameObject::ProcessUpdate()
{
}

void CGameObject::ProcessDraw(Controller& _controller)
{
	_controller.SetConsoleCursor(m_iPositionX, m_iPositionY);
	std::cout << m_cToken;
}
