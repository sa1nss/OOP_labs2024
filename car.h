#pragma once
#include <string>

using namespace std;

class Car 
{
private:
    string brand;
    string model;
    int year;
    int mileage;
    string color;

public:
    Car();

    Car(string b, string m, int y, int mi, string c);

    Car(const Car& src);

    ~Car();

    string getBrand();
    string getModel();
    int getYear();
    int getMileage();
    string getColor();

    void setBrand(string b);
    void setModel(string m);
    void setYear(int y);
    void setMileage(int mi);
    void setColor(string c);

    void printInfo();
}
