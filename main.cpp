#include <iostream>
#include "man.h"
#include "Student.h"

using namespace std;

void displayManInfo(const Man &man) 
{
    man.display();
}

int main() 
{
    Man man("John Doe", 35, "Male", 80.5);
    displayManInfo(man);

    Student student("Alice Smith", 20, "Female", 60.0, 2);
    displayManInfo(student);

    student.setName("Alice Johnson");
    student.setAge(21);
    student.setWeight(62.0);
    student.incrementYearOfStudy();

    displayManInfo(student);

    return 0;
}
