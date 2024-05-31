#include <iostream>
#include "Rational.h"

using namespace std;

Rational::Rational(int num, int denom) : numerator(num), denominator(denom) {}

Number* Rational::add(const Number& other) const 
{
    const Rational& r = dynamic_cast<const Rational&>(other);
    int num = numerator * r.denominator + r.numerator * denominator;
    int denom = denominator * r.denominator;
    return new Rational(num, denom);
}

void Rational::print() const 
{
    cout << numerator << "/" << denominator << endl;
}
