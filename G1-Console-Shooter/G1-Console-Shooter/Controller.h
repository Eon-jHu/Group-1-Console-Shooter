#pragma once
#include <iostream>

enum EInputAxis
{
	AXIS_NONE = 0,
	AXIS_INC = 1,
	AXIS_DECRC = -1
};

struct MovementInput
{
	EInputAxis m_eAxisHorizontal = EInputAxis::AXIS_NONE;
	EInputAxis m_eAxisVertical = EInputAxis::AXIS_NONE;
	bool m_bSpace_held = false;
};

class Controller
{
public:
	void ProcessMoveInput(MovementInput& _Input);
	void SetConsoleCursor(int _iPositionX, int _iPositionY);
};

