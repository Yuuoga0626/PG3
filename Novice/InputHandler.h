#pragma once

#include "Command.h"

class InputHandler {
private:
	ICommand* moveLeftCommand_;
	ICommand* moveRightCommand_;

public:
	InputHandler();

	ICommand* HandleInput();

	void SetLeftCommand();

	void SetRightCommand();
};
