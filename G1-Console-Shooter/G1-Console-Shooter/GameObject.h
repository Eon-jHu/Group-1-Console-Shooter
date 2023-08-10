#pragma once
#include "Controller.h"

class CGameObject
{
public:
	int m_iPositionX = 0;
	int m_iPositionY = 0;
	char m_cToken = '#';
	CGameObject();
	virtual void Initialisation(int _iPositionX, int _iPositionY, char _cToken);
	virtual void ProcessInput(MovementInput& _Input);
	virtual void ProcessUpdate();
	virtual void ProcessDraw(Controller& _controller);
};


