#include <string>
#include <iostream>
#include "vegie.h"
using namespace std;

Vegie::nextID = 100; // start at 100
    
Vegie::vegie(string n, int v)
{
    name = n;
    volume = v;
    animalID = nextID++;
    favourite_food = "grass";
}

string Vegie::get_name()
{
    return ("Safe: " + name);
}

Vegie::set_fav(string f)
{
    favourite_food = f;
}

string Vegie::get_fav()
{
    return favourite_food;
}