#include <string>
#include <iostream>
#include "person.h"

person::person(std::string personName) // constructor
{
    name = personName;
}

person::~person() // destructor
{}

std::string person::get_name()
{
    return name;
}