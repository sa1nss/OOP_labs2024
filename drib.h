#ifndef DRIB_H
#define DRIB_H

#include <iostream>

using namespace std;

class Fraction 
{
private:
    int numerator;
    int denominator;
    void reduce();

public:
    Fraction(int num = 0, int den = 1);
    
    Fraction operator-(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
    bool operator<(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
    Fraction& operator++();   
    Fraction operator++(int);  
    Fraction& operator=(const Fraction& other);

    friend Fraction operator-(const Fraction& left, const Fraction& right);
    friend bool operator>(const Fraction& left, const Fraction& right);
    friend bool operator<(const Fraction& left, const Fraction& right);
    friend Fraction operator/(const Fraction& left, const Fraction& right);
    friend ostream& operator<<(ostream& os, const Fraction& f);

    friend Fraction subtract(const Fraction& left, const Fraction& right);
    friend bool greaterThan(const Fraction& left, const Fraction& right);
    friend bool lessThan(const Fraction& left, const Fraction& right);
    friend Fraction divide(const Fraction& left, const Fraction& right);
};

#endif 
