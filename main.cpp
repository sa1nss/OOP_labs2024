#include <iostream>
#include "Vector.h"
#include "Error.h"

using namespace std;

int main() 
{
    try 
    {
        Vector<int> intVec({10, 20, 30, 40, 50});
        cout << "Integer Vector size: " << intVec.size() << endl;
        cout << "Integer Vector element at index 2: " << intVec[2] << endl;
        Vector<int> intResult = intVec / 2;
        cout << "Integer Vector after division: ";
        for (size_t i = 0; i < intResult.size(); ++i) 
        {
            cout << intResult[i] << " ";
        }
        cout << endl;
        intVec.removeLast(2);
        cout << "Integer Vector after removing last 2 elements: ";
        for (size_t i = 0; i < intVec.size(); ++i) 
        {
            cout << intVec[i] << " ";
        }
        cout << endl;

        Vector<double> doubleVec({10.5, 20.5, 30.5, 40.5, 50.5});
        cout << "Double Vector size: " << doubleVec.size() << endl;
        cout << "Double Vector element at index 2: " << doubleVec[2] << endl;
        Vector<double> doubleResult = doubleVec / 2.5;
        cout << "Double Vector after division: ";
        for (size_t i = 0; i < doubleResult.size(); ++i) 
        {
            cout << doubleResult[i] << " ";
        }
        cout << endl;
        doubleVec.removeLast(2);
        cout << "Double Vector after removing last 2 elements: ";
        for (size_t i = 0; i < doubleVec.size(); ++i) 
        {
            cout << doubleVec[i] << " ";
        }
        cout << endl;

        cout << "Accessing out of range element: " << intVec[10] << endl;

    } catch (const error& e) 
    {
        e.what();
    }

    return 0;
}
