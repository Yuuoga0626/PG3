#pragma once
#include "IShape.h"

class RectangleShape : public IShape
{
public:
    RectangleShape(float width, float height);

    void Size() override;
    void Draw() override;

private:
    float width_;
    float height_;
    float area_;
};