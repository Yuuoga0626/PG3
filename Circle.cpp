#include "Circle.h"
#include<iostream>

Circle::Circle(float radius) {
	radius_ = radius;
	area_ = 0.0f;
}

void Circle::Size() {
	area_ = radius_ * radius_ * 3.14;
}

void Circle::Draw() {
	std::cout << "円の面積は"<< area_ << std::endl;

}