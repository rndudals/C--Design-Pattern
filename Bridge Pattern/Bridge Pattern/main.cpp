#include <iostream>
#include "RasterRenderer.h"
#include "VectorRenderer.h"
#include "Circle.h"
using namespace std;

int main() {
	auto raster = std::make_shared<RasterRenderer>();
	auto vector = std::make_shared<VectorRenderer>();
	Circle c1(raster, 10, 10, 10);
	Circle c2(vector, 20, 20, 20);

	c1.draw();
	c2.draw();

	c1.resize(1.2);
	c1.draw();
	return 0;
}