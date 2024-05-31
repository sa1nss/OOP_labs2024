#include <iostream>
#include "Rational.h"
#include "Decimal.h"

using namespace std;

int main() 
{
    Rational r1(1, 2), r2(1, 3);
    Number* resultRational = r1.add(r2);
    resultRational->print();
    delete resultRational;

    Decimal d1(1.5), d2(2.5);
    Number* resultDecimal = d1.add(d2);
    resultDecimal->print();
    delete resultDecimal;

    return 0;
}
