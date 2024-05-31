#ifndef RATIONAL_H
#define RATIONAL_H

#include "Number.h"

using namespace std;

class Rational : public Number 
{
private:
    int numerator;
    int denominator;
public:
    Rational(int num, int denom);
    Number* add(const Number& other) const override;
    void print() const override;
}
