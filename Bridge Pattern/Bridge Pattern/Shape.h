#pragma once
#include <iostream>
#include <memory>
#include "Renderer.h"

class Shape
{
public:
	Shape(std::shared_ptr<Renderer> renderer)
		: renderer_(renderer) {}
	virtual ~Shape() = default;

	virtual void draw() = 0;
	virtual void resize(float factor) = 0;
protected:
	std::shared_ptr<Renderer> renderer_;
};

