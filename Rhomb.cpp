#include "rhombus.h"

string Rhombus::class_name = "Rhombus";
int Rhombus::instance_count = 0;

Rhombus::Rhombus(string name, double side_length, double angle)
    : name(name), side_length(side_length), angle(angle) 
{
    instance_count++;
}
