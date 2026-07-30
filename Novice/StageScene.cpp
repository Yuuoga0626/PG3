#include "StageScene.h"
#include <Novice.h>

StageScene::StageScene() {
	playerX_ = 620;
	playerY_ = 650;

	isShot_ = false;

	enemyX_ = 620;
	enemyY_ = 100;
	enemyAlive_ = true;

	enemySpeed_ = 2;

	backgroundTexture_ = Novice::LoadTexture("./Resources/background.png");
}

void StageScene::Update(char* keys, char* preKeys) {
	// 左移動
	if (keys[DIK_LEFT]) {
		playerX_ -= 5;
	}

	// 右移動
	if (keys[DIK_RIGHT]) {
		playerX_ += 5;
	}

	if (enemyAlive_) {

		enemyX_ += enemySpeed_;

		// 左右の壁に当たったら向きを変える
		if (enemyX_ <= 0 || enemyX_ >= 1240) {
			enemySpeed_ *= -1;
		}
	}

	// SPACEで発射
	if (!isShot_ && preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {

		bulletX_ = playerX_ + 20;
		bulletY_ = playerY_;

		isShot_ = true;
	}

	// 弾移動
	if (isShot_) {

		bulletY_ -= 10;

		if (bulletY_ < 0) {
			isShot_ = false;
		}
	}
	if (isShot_ && enemyAlive_) {

		

		if (bulletX_ >= enemyX_ && bulletX_ <= enemyX_ + 40 && bulletY_ >= enemyY_ && bulletY_ <= enemyY_ + 40) {

			enemyAlive_ = false;
			isEnd_ = true; // ClearSceneへ
		}
	}

}

void StageScene::Draw() { 

	Novice::DrawSprite(0, 0, backgroundTexture_, 1.0f, 1.0f, 0.0f, WHITE);

	Novice::DrawBox(playerX_, playerY_, 40, 40, 0.0f, WHITE, kFillModeSolid);


	// 弾
	if (isShot_) {

		Novice::DrawEllipse(bulletX_, bulletY_, 5, 5, 0.0f, BLUE, kFillModeSolid);
	}

	if (enemyAlive_) {
		Novice::DrawBox(enemyX_, enemyY_, 40, 40, 0.0f, RED, kFillModeSolid);
	}
}