#include "Circle.h"

void Circle::draw()
{
	renderer_->renderCircle(x_, y_, radius_);
}

void Circle::resize(float factor)
{
	radius_ *= factor;
}
