#pragma once
#include "Scene.h"

class TitleScene : public Scene {
public:
	TitleScene();

	void Update(char* keys, char* preKeys) override;
	void Draw() override;

private:
	int titleTexture_;
};