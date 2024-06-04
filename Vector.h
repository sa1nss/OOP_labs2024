#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include "Error.h"

using namespace std;

template <typename T>
class Vector 
{
private:
    vector<T> data;

public:
    Vector() = default;
    Vector(const vector<T>& vec) : data(vec) {}

    T& operator[](size_t index);
    size_t size() const;
    Vector<T> operator/(T divisor);

    void removeLast(size_t count);
};

#include "Vector.cpp"  // Including a file with designated template methods
