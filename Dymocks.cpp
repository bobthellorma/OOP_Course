#include "Dymocks.h"
#include <string>
using namespace std;

Dymocks::Dymocks()
{
    // default constructor
}  

Dymocks::Dymocks(bool o)
{
    isOnline = o;
    numBook = 1000;
    name = "Dymocks";
    address = "";
    nextNumStores++;
    storeID = nextNumStores;
}

int Dymocks::get_nextNumStores()
{
    return nextNumStores;
}

int Dymocks::get_storeID()
{
    return storeID;
}

bool Dymocks::get_isOnline()
{
    return isOnline;
}

void Dymocks::set_nextNumStores(int n)
{
    nextNumStores = n;
}

void Dymocks::set_storeID(int s)
{
    storeID = s;
}

void Dymocks::set_isOnline(bool o)
{
    isOnline = o;
}

float Dymocks::get_onlineTax()
{
    if (isOnline == true)
    {
    return 500.0;
    }
    else
    {
        return 0.0;
    }
}

int Dymocks::nextNumStores = 0; // initialise static value