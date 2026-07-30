#include "Scene.h"

void Scene::Initialize() { 
	inputHandler_ = new InputHandler();

	inputHandler_->SetLeftCommand();
	inputHandler_->SetRightCommand();

	player_ = new Player();
	player_->Initialize();

}

void Scene::Update() {

	iCommand_ = inputHandler_->HandleInput();

	if (iCommand_) {
		iCommand_->Execute(*player_);
	
	}

	player_->Update();

}

void Scene::Draw() { 
	player_->Draw();
}