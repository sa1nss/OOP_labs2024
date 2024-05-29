#include "drib.h"

using namespace std;

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) 
{
    reduce();
}

void Fraction::reduce() 
{
    int gcd = std::gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

Fraction Fraction::operator-(const Fraction& other) const 
{
    return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
}

bool Fraction::operator>(const Fraction& other) const 
{
    return (numerator * other.denominator) > (other.numerator * denominator);
}

bool Fraction::operator<(const Fraction& other) const 
{
    return (numerator * other.denominator) < (other.numerator * denominator);
}

Fraction Fraction::operator/(const Fraction& other) const 
{
    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

Fraction& Fraction::operator++() 
{
    numerator += denominator;
    return *this;
}

Fraction Fraction::operator++(int) 
{
    Fraction temp = *this;
    ++(*this);
    return temp;
}

Fraction& Fraction::operator=(const Fraction& other) 
{
    if (this != &other) 
    {
        numerator = other.numerator;
        denominator = other.denominator;
        reduce();
    }
    return *this;
}

Fraction operator-(const Fraction& left, const Fraction& right) 
{
    return Fraction(left.numerator * right.denominator - right.numerator * left.denominator, left.denominator * right.denominator);
}

bool operator>(const Fraction& left, const Fraction& right) 
{
    return (left.numerator * right.denominator) > (right.numerator * left.denominator);
}

bool operator<(const Fraction& left, const Fraction& right) 
{
    return (left.numerator * right.denominator) < (right.numerator * left.denominator);
}

Fraction operator/(const Fraction& left, const Fraction& right) 
{
    return Fraction(left.numerator * right.denominator, left.denominator * right.numerator);
}

ostream& operator<<(ostream& os, const Fraction& f) 
{
    os << f.numerator << '/' << f.denominator;
    return os;
}

Fraction subtract(const Fraction& left, const Fraction& right) 
{
    return left - right;
}

bool greaterThan(const Fraction& left, const Fraction& right) 
{
    return left > right;
}

bool lessThan(const Fraction& left, const Fraction& right) 
{
    return left < right;
}

Fraction divide(const Fraction& left, const Fraction& right) 
{
    return left / right;
}
