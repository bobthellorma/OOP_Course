#include <string>
#include <iostream>
#include "vegie.h"
using namespace std;
    
vegie::vegie(string n, int v)
{
    name = n;
    volume = v;
    animalID = nextID; 
    nextID++;
    favourite_food = "grass";
}

string vegie::get_name()
{
    return ("Safe: " + name);
}

void vegie::set_favourite_food(string f)
{
    favourite_food = f;
}

string vegie::get_favourite_food()
{
    return favourite_food;
}

int vegie::nextID = 100;