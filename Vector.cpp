#include "Vector.h"
#include "Error.h"
#include <iostream>

using namespace std;

template <typename T>
T& Vector<T>::operator[](size_t index) 
{
    if (index >= data.size()) 
    {
        throw error("Index out of range");
    }
    return data[index];
}

template <typename T>
size_t Vector<T>::size() const 
{
    return data.size();
}

template <typename T>
Vector<T> Vector<T>::operator/(T divisor) 
{
    if (divisor == 0) 
    {
        throw error("Division by zero");
    }

    Vector<T> result(*this);
    for (size_t i = 0; i < result.data.size(); ++i) 
    {
        result.data[i] /= divisor;
    }

    return result;
}

template <typename T>
void Vector<T>::removeLast(size_t count) 
{
    if (count > data.size()) 
    {
        throw error("Remove count is greater than the vector size");
    }

    data.resize(data.size() - count);
}

// Ensure that the compiler matches the required types
template class Vector<int>;
template class Vector<double>;
