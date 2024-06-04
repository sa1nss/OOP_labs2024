#ifndef ERROR_H
#define ERROR_H

#include <stdexcept>
#include <string>

using namespace std;

class VectorError : public runtime_error 
{
public:
    explicit VectorError(const string& message) : runtime_error(message) {}
};

class OutOfRangeError : public VectorError 
{
public:
    explicit OutOfRangeError(const string& message) : VectorError(message) {}
};

class DivideByZeroError : public VectorError 
{
public:
    explicit DivideByZeroError(const string& message) : VectorError(message) {}
}
