#ifndef _ZOO_H
#define _ZOO_H
#include "vegie.h"
#include "hunter.h"
#include <string>
using namespace std;

class zoo // Zoo 
{
    protected:
    string name;
    int number_of_animals;
    animal **animals;

    public:
    zoo(string n,int cows,int lions);      // create a zoo with the given number of cows and lions

};

#endif