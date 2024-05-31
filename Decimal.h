#ifndef DECIMAL_H
#define DECIMAL_H

#include "Number.h"

using namespace std;

class Decimal : public Number 
{
private:
    double value;
public:
    Decimal(double val);
    Number* add(const Number& other) const override;
    void print() const override;
}
