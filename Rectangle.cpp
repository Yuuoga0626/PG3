#include "Rectangle.h"
#include <iostream>

RectangleShape::RectangleShape(float width, float height)
{
    width_ = width;
    height_ = height;
    area_ = 0.0f;
}

void RectangleShape::Size()
{
    area_ = width_ * height_;
}

void RectangleShape::Draw()
{
    std::cout << "矩形の面積は " << area_ << std::endl;
}