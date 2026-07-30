#pragma once

class Scene {
public:
	virtual ~Scene() {}

	virtual void Update(char* keys, char* preKeys) = 0;
	virtual void Draw() = 0;

	bool IsEnd() const { return isEnd_; }

protected:
	bool isEnd_ = false;
};