#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

Animal::ID = 0; // set static animal ID to zero initially

Animal::Animal(string n, int v)
{
    name = n;
    volume = v;
    ID = Animal::count++; // id = no. of animals + 1
}

Animal::set_name(string animalName)
{
    name = animalName;
}

Animal::set_volume(int animalVolume)
{
    volume = animalVolume;
}

string Animal::get_name()
{
    return name;
}

int Animal::get_ID()
{
    return animalID;
}
    
int Animal::get_volume()
{
    return volume;
}

Animal::ID = 0; // assign static variable a value