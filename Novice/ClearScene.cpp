#include "ClearScene.h"
#include <Novice.h>

ClearScene::ClearScene() { 
	clearTexture_ = Novice::LoadTexture("./Resources/clear.png");
}

void ClearScene::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		isEnd_ = true;
	}
}

void ClearScene::Draw() {

	Novice::DrawSprite(0, 0, clearTexture_, 1.0f, 1.0f, 0.0f, WHITE);
	
	Novice::ScreenPrintf(430, 550, "Press SPACE");
}