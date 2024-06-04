#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include "Error.h"

using namespace std;

class Vector 
{
private:
    vector<int> data;

public:
    Vector() = default;
    Vector(const vector<int>& vec) : data(vec) {}

    int& operator[](size_t index);
    size_t size() const;
    Vector operator/(int divisor);

    void removeLast(size_t count);
}
