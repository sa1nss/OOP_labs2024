#include "car.h"
#include <iostream>

using namespace std;

Car::Car() : brand("Unknown"), model("Unknown"), year(0), mileage(0), color("Unknown") 
{
    cout << "Default constructor called" << endl;
}

Car::Car(string b, string m, int y, int mi, string c)
    : brand(b), model(m), year(y), mileage(mi), color(c) 
{
    cout << "Parameterized constructor called" << endl;
}

Car::Car(const Car& src)
    : brand(src.brand), model(src.model), year(src.year), mileage(src.mileage), color(src.color) 
{
    cout << "Copying constructor" << endl;
}

Car::~Car() 
{
    cout << "Destructor called" << endl;
}

string Car::getBrand() { return brand; }
string Car::getModel() { return model; }
int Car::getYear() { return year; }
int Car::getMileage() { return mileage; }
string Car::getColor() { return color; }

void Car::setBrand(string b) { brand = b; }
void Car::setModel(string m) { model = m; }
void Car::setYear(int y) { year = y; }
void Car::setMileage(int mi) { mileage = mi; }
void Car::setColor(string c) { color = c; }

void Car::printInfo() 
{
    cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year
        << ", Mileage: " << mileage << ", Color: " << color << endl;
}
