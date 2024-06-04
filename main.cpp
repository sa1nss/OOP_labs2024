#include <iostream>
#include "Vector.h"
#include "Error.h"

using namespace std;

int main() 
{
    try 
    {
        Vector vec({10, 20, 30, 40, 50});
        
        cout << "Vector size: " << vec.size() << endl;

        cout << "Element at index 2: " << vec[2] << endl;

        Vector result = vec / 2;
        cout << "Result after division: ";
        for (size_t i = 0; i < result.size(); ++i) 
        {
            cout << result[i] << " ";
        }
        cout << endl;

        vec.removeLast(2);
        cout << "Vector after removing last 2 elements: ";
        for (size_t i = 0; i < vec.size(); ++i) 
        {
            cout << vec[i] << " ";
        }
        cout << endl;

        cout << "Accessing out of range element: " << vec[10] << endl;

    } catch (const VectorError& e)
    {
        cerr << "Vector error: " << e.what() << endl;
    }

    return 0;
}
