#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include <iostream>

using namespace std;

class Trapezoid 
{
private:
    double a; // Length of the first base
    double b; // Length of the second base
    double h; // Height

public:
    
    Trapezoid();

    Trapezoid(double a, double b, double h);

    ~Trapezoid();

    double& operator[](int index);

    double operator()() const;

    friend ostream& operator<<(ostream &out, const Trapezoid &trapezoid);
    friend istream& operator>>(istream &in, Trapezoid &trapezoid);

    double area() const;
};
