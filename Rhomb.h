#ifndef RHOMBUS_H
#define RHOMBUS_H

#include <string>

using namespace std;

class Rhombus 
{
public:
    static string class_name;
    static int instance_count;
    string name;
    double side_length;
    double angle;

    Rhombus(string name, double side_length, double angle);
}
