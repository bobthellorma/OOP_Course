#include "student.h"
#include <string>
#include <iostream>
using namespace std;

    student::student(int Age, string Name)
    {
        if (Age < 18)
        {
            throw("Student must be older than 18");
        }
        age = Age;
        name = Name;
        title = "Mr ";
        personID = nextID;
        nextID++;
    }

    int student::get_assignments()
    {
        return assignments;
    }

    void student::set_assignments(int numAss)
    {
        assignments = numAss;
    }

    string student::get_name()
    {
        return (title + name);
    }

    int student::nextID = 0;