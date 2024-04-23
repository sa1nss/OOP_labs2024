#include <iostream>
#include <cmath>
#include "rhombus.h"

using namespace std;


int Rhombus::getSide() const // receiving
{
    return side;
}

void Rhombus::setSide(int s) // installation
{
    side = s;
}

int Rhombus::calculateArea() const
{
    return side * side * sin(M_PI / 3); // Formula for the area of ​​a rhombus
}

int Rhombus::calculatePerimeter() const // Formula for the perimeter of a rhombus
{
    return 4 * side;
}
};
