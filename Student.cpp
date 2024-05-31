#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(const string &name, int age, const string &gender, double weight, int yearOfStudy)
    : Man(name, age, gender, weight), yearOfStudy(yearOfStudy) {}

int Student::getYearOfStudy() const 
{
    return yearOfStudy;
}

void Student::setYearOfStudy(int yearOfStudy) 
{
    this->yearOfStudy = yearOfStudy;
}

void Student::incrementYearOfStudy() 
{
    ++yearOfStudy;
}

void Student::display() const 
{
    Man::display();
    cout << "Year of Study: " << yearOfStudy << endl;
}
