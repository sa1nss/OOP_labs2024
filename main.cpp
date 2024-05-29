#include <iostream>
#include "trapezoid.h"

using namespace std;

int main() 
{
    Trapezoid t1; // Default object
    Trapezoid t2(3.0, 4.0, 2.0); // Parameterized object

    cout << "Trapezoid t1: " << t1 << endl;
    cout << "Trapezoid t2: " << t2 << endl;

    cout << "Enter values for t1 (a, b, h): ";
    cin >> t1;

    cout << "Updated Trapezoid t1: " << t1 << endl;

    cout << "Base a of t1: " << t1[0] << endl;
    cout << "Base b of t1: " << t1[1] << endl;
    cout << "Height h of t1: " << t1[2] << endl;

    cout << "Area of t1: " << t1() << endl;
    cout << "Area of t2: " << t2() << endl;

    return 0;
}
