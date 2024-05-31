#ifndef STUDENT_H
#define STUDENT_H

#include "man.h"

using namespace std;

class Student : public Man 
{
private:
    int yearOfStudy;

public:
    Student(const string &name, int age, const string &gender, double weight, int yearOfStudy);

    int getYearOfStudy() const;

    void setYearOfStudy(int yearOfStudy);
    void incrementYearOfStudy();

    void display() const override;
}
