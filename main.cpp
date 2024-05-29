#include <iostream>
#include "drib.h"

using namespace std;

int main() 
{
    Fraction a(3, 4);
    Fraction b(2, 3);

    Fraction result1 = a - b;              
    Fraction result2 = subtract(a, b);       
    Fraction result3 = a / b;              
    Fraction result4 = divide(a, b);        

    bool comparison1 = a > b;                
    bool comparison2 = greaterThan(a, b);   
    bool comparison3 = a < b;                
    bool comparison4 = lessThan(a, b);      

    Fraction incremented1 = ++a;            
    Fraction incremented2 = b++;             

    cout << "a - b = " << result1 << endl;
    cout << "subtract(a, b) = " << result2 << endl;
    cout << "a / b = " << result3 << endl;
    cout << "divide(a, b) = " << result4 << endl;
    cout << "a > b = " << comparison1 << endl;
    cout << "greaterThan(a, b) = " << comparison2 << endl;
    cout << "a < b = " << comparison3 << endl;
    cout << "lessThan(a, b) = " << comparison4 << endl;
    cout << "++a = " << incremented1 << endl;
    cout << "b++ = " << incremented2 << endl;
    cout << "b after b++ = " << b << endl;

    return 0;
}
