#ifndef NUMBER_H
#define NUMBER_H

using namespace std;

class Number 
{
public:
    virtual Number* add(const Number& other) const = 0;
    virtual void print() const = 0;
    virtual ~Number() {}
}
