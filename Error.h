#ifndef ERROR_H
#define ERROR_H

#include <string>
#include <iostream>

using namespace std;

class error 
{
    string str;
public:
    error(string s) : str(s) {}
    void what() const 
    {
        cout << str << endl;
    }
};
