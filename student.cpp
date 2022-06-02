#include "student.h"
#include <string>
using namespace std;

student::student(string Name, int Age)// constructor
{
    name = Name;
    age = Age;
    title = "Mr";
    ID = nextID;
    nextID++;
}

string student::get_name() // define inherited virtual function
{
    return (title + name);
}

int student::get_assignments()
{
    return assignments;
}

void student::set_assignments(int NumAss)
{
    assignments = NumAss;
}

int student::nextID = 0;