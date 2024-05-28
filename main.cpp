#include <iostream>
#include "car.h"

using namespace std;

int main() 
{
    Car car1;
    Car car2("Toyota", "Camry", 2020, 15000, "Red");
    Car car3("Honda", "Civic");
    Car car4(car2);
    Car car5("Nissan", "Altima", "Blue");

    Car cars[3] = { car1, car2, car3 };

    for (int i = 0; i < 3; ++i) 
    {
        cars[i].printInfo();
    }

    return 0;
}
