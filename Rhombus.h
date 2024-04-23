#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Rhombus
{
private:
	int side;

public:
	Rhombus(int s) : side(s) {}
	int getSide() const;
	void setSide(int s);
	int calculateArea() const;
	int calculatePerimeter() const;
};
