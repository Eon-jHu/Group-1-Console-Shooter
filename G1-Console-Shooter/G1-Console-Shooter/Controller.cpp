#include "Controller.h"
#include "Windows.h"
#include <iostream>

void Controller::ProcessMoveInput(MovementInput& _Input)
{
	if (GetKeyState(VK_UP) & 0x8000)
	{
		std::cout << "UP CHECKED" << std::endl;
		_Input.m_eAxisVertical = EInputAxis::AXIS_DECRC;
	}
	if (GetKeyState(VK_DOWN) & 0x8000)
	{
		std::cout << "DOWN CHECKED" << std::endl;
		_Input.m_eAxisVertical = EInputAxis::AXIS_INC;
	}
	if (GetKeyState(VK_LEFT) & 0x8000)
	{
		std::cout << "LEFT CHECKED" << std::endl;
		_Input.m_eAxisHorizontal = EInputAxis::AXIS_DECRC;
	}
	if (GetKeyState(VK_RIGHT) & 0x8000)
	{
		std::cout << "RIGHT CHECKED" << std::endl;
		_Input.m_eAxisHorizontal = EInputAxis::AXIS_INC;
	}
	_Input.m_bSpace_held = GetKeyState(VK_SPACE) & 0x8000;
	if (_Input.m_bSpace_held)
	{
		std::cout << "SPACEBAR CHECKED" << std::endl;
	}
}

void Controller::SetConsoleCursor(int _iPositionX, int _iPositionY)
{
	COORD Position;
	Position.X = _iPositionX;
	Position.Y = _iPositionY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Position);
}
