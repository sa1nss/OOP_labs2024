#include "Vector.h"
#include <stdexcept>

using namespace std;

int& Vector::operator[](size_t index) 
{
    if (index >= data.size()) 
    {
        throw OutOfRangeError("Index out of range");
    }
    return data[index];
}

size_t Vector::size() const 
{
    return data.size();
}

Vector Vector::operator/(int divisor) 
{
    if (divisor == 0) 
    {
        throw DivideByZeroError("Division by zero");
    }

    Vector result(*this);
    for (size_t i = 0; i < result.data.size(); ++i) 
    {
        result.data[i] /= divisor;
    }

    return result;
}

void Vector::removeLast(size_t count) 
{
    if (count > data.size()) 
    {
        throw OutOfRangeError("Remove count is greater than the vector size");
    }

    data.resize(data.size() - count);
}
