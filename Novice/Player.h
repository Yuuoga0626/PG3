#pragma once

struct Vector2 {
	float x;
	float y;
};

class Player {
public:
	void Initialize();
	void Update();
	void Draw();

	void MoveRight();

	void MoveLeft();

private:
	Vector2 position_;

	float speed_ = 6.0f;
};
