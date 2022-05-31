#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

int animal::count = 0; // set static animal ID to zero initially

animal::animal(string n, int v)
{
    name = n;
    volume = v;
    animalID = count;
    count++;
}

void animal::set_name(string animalName)
{
    name = animalName;
}

void animal::set_volume(int animalVolume)
{
    volume = animalVolume;
}

int animal::get_ID()
{
    return animalID;
}
    
int animal::get_volume()
{
    return volume;
}

string animal::get_name()
{
    return "None";
}

animal::animal(){
    // default constructor
}

animal::~animal(){
    // default destructor
}

// animal::ID = 0; // assign static variable a value