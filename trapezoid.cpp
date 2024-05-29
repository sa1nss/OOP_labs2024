#include "trapezoid.h"
#include <iostream>

using namespace std;

Trapezoid::Trapezoid() : a(0), b(0), h(0) {}

Trapezoid::Trapezoid(double a, double b, double h) : a(a), b(b), h(h) {}

Trapezoid::~Trapezoid() {}

double& Trapezoid::operator[](int index) 
{
    if (index < 0 || index > 2) 
    {
        cout << "index is out of range\n";
        static double dummy = 0; 
        return dummy;
    }
    switch(index) 
    {
        case 0: return a;
        case 1: return b;
        case 2: return h;
    }
    static double dummy = 0; // This should never happen
    return dummy;
}


double Trapezoid::operator()() const 
{
    return area();
}


istream& operator>>(istream &in, Trapezoid &trapezoid) 
{
    in >> trapezoid.a >> trapezoid.b >> trapezoid.h;
    return in;
}

ostream& operator<<(ostream &out, const Trapezoid &trapezoid) 
{
    out << "Trapezoid(a: " << trapezoid.a << ", b: " << trapezoid.b << ", h: " << trapezoid.h << ")";
    return out;
}

// Method for calculating the area
double Trapezoid::area() const 
{
    return 0.5 * (a + b) * h;
}
