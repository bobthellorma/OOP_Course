#include "student.h"
#include <string>
#include <iostream>

student::student(std::string studName, int data) // constructor
{
    semester = data;
    name = studName;
}

student::~student() // destructor
{}

int student::getSemester()
{
    return semester;
}