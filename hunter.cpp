#include "hunter.h"
#include <string>
using namespace std;

hunter::hunter(string n, int v)
{
    name = n;
    volume = v;
    animalID = nextID;
    nextID++;
    kills = 0;
}

string hunter::get_name()
{
    return ("Hunter: " + name); // return name prefixed with hunter
}

int hunter::get_kills()
{
    return kills;
}

void hunter::set_kills(int k)
{
    kills = k;
}

int hunter::nextID = 1000; // assign static variable a value