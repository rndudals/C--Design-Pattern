#pragma once
class Renderer
{
public:
	virtual ~Renderer() = default;
	virtual void renderCircle(float x, float y, float radius) = 0;
};

