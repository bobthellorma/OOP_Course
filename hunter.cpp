#include "hunter.h"
using namespace std;

Hunter::Hunter(string n, int v)
{
    name = n;
    volume = v;
    animalID = nextID++;
    kills = 0;
}

string Hunter::get_name()
{
    return ("Hunter " + name); // return name prefixed with hunter
}

int Hunter::get_kills()
{
    return kills;
}

Hunter::set_kills(int k)
{
    kills = k;
}

Hunter::nextID = 1000; // assign static variable a value