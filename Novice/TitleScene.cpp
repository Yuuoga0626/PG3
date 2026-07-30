#include "TitleScene.h"
#include <Novice.h>

TitleScene::TitleScene() { 
	titleTexture_ = Novice::LoadTexture("./Resources/title.png");
}

void TitleScene::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		isEnd_ = true;
	}
}

void TitleScene::Draw() {
	Novice::DrawSprite(0, 0, titleTexture_, 1.0f, 1.0f, 0.0f, WHITE);
	Novice::ScreenPrintf(430, 350, "Press SPACE");
}