#include "InputHandler.h"
#include <Novice.h>

InputHandler::InputHandler() : moveLeftCommand_(nullptr), moveRightCommand_(nullptr) {}

ICommand* InputHandler::HandleInput() {

	if (Novice::CheckHitKey(DIK_A)) {
		return moveLeftCommand_;
	}

	if (Novice::CheckHitKey(DIK_D)) {
		return moveRightCommand_;
	}

	return nullptr;
}

void InputHandler::SetLeftCommand() { 
	ICommand* command = new MoveLeftCommand();
	this->moveLeftCommand_ = command;
}

void InputHandler::SetRightCommand() {
	ICommand* command = new MoveRightCommand();
	this->moveRightCommand_ = command;
}