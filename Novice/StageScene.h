#pragma once
#include "Scene.h"

class StageScene : public Scene {
public:
	StageScene();

	void Update(char* keys, char* preKeys) override;
	void Draw() override;

private:
	int playerX_;
	int playerY_;

	int bulletX_;
	int bulletY_;
	bool isShot_;

	int enemyX_;
	int enemyY_;
	bool enemyAlive_;

	int enemySpeed_;

	int backgroundTexture_;
};