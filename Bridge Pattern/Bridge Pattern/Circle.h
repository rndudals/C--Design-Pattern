#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(std::shared_ptr<Renderer> renderer, float x, float y, float radius)
		: Shape(renderer), x_(x), y_(y), radius_(radius) {}

	void draw();
	void resize(float factor);

private:
	float x_, y_, radius_;
};

