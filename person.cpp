#include <string>
#include "person.h"
using namespace std;

person::person()
{
    // default constructor
}

person::person(string Name, int Age)
{
    name = Name;
    age = Age;
}

int person::get_age()
{
    return age;
}

int person::get_ID()
{
    return personID;
}

void person::set_name(string new_name)
{
    name = new_name;
}

void person::set_age(int new_age)
{
    age = new_age;
}