#include<iostream>
#include<Windows.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

    Circle circle(5.0f);
    RectangleShape rectangle(4.0f, 6.0f);

    IShape* shape;

    shape = &circle;
    shape->Size();
    shape->Draw();

    shape = &rectangle;
    shape->Size();
    shape->Draw();

	return 0;
}