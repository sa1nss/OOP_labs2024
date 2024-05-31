#include "man.h"
#include <iostream>

using namespace std;

Man::Man(const string &name, int age, const string &gender, double weight)
    : name(name), age(age), gender(gender), weight(weight) {}

string Man::getName() const 
{
    return name;
}

int Man::getAge() const 
{
    return age;
}

string Man::getGender() const 
{
    return gender;
}

double Man::getWeight() const 
{
    return weight;
}

void Man::setName(const string &name) 
{
    this->name = name;
}

void Man::setAge(int age) 
{
    this->age = age;
}

void Man::setWeight(double weight) 
{
    this->weight = weight;
}

void Man::display() const 
{
    cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << "\nWeight: " << weight << endl;
}
