#include <iostream>
#include "Rhombus.h" 

using namespace std;

int main() 
{
    Rhombus rhombus(5.0); 

    cout << "Side of the rhombus: " << rhombus.getSide() << endl;
    cout << "Area of the rhombus: " << rhombus.calculateArea() << endl;
    cout << "Perimeter of the rhombus: " << rhombus.calculatePerimeter() << endl;

    rhombus.setSide(7.0);
    cout << "\nAfter changing the side of the rhombus:" << endl;
    cout << "Side of the rhombus: " << rhombus.getSide() << endl;
    cout << "Area of the rhombus: " << rhombus.calculateArea() << endl;
    cout << "Perimeter of the rhombus: " << rhombus.calculatePerimeter() << endl;

    return 0;
}
