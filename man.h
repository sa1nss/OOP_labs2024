#ifndef MAN_H
#define MAN_H

#include <string>

using namespace std;

class Man 
{
private:
    string name;
    int age;
    string gender;
    double weight;

public:
    Man(const string &name, int age, const string &gender, double weight);

    string getName() const;
    int getAge() const;
    string getGender() const;
    double getWeight() const;

    void setName(const string &name);
    void setAge(int age);
    void setWeight(double weight);

    virtual void display() const;
}
