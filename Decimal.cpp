#include <iostream>
#include "Decimal.h"

using namespace std;

Decimal::Decimal(double val) : value(val) {}

Number* Decimal::add(const Number& other) const 
{
    const Decimal& d = dynamic_cast<const Decimal&>(other);
    return new Decimal(value + d.value);
}

void Decimal::print() const 
{
    cout << value << endl;
}
