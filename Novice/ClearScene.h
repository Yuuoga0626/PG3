#pragma once
#include "Scene.h"

class ClearScene : public Scene {
public:
	ClearScene();

	void Update(char* keys, char* preKeys) override;
	void Draw() override;

private:
	int clearTexture_;
};