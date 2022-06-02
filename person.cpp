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

string person::get_title()
{
    return title;
}

int person::get_ID()
{
    return ID;
}

int person::get_age()
{
    return age;
}

void person::set_name(string Name)
{
    name = Name;
}

void person::set_age(int Age)
{
    age = Age;
}