#include "BookStore.h"
#include "BarnesNoble.h"
#include <string>
using namespace std;

BarnesNoble::BarnesNoble()
{
    // default constructor
}

BarnesNoble::BarnesNoble(string n)
{
    name = n;
    isOnline = false;
}

void BarnesNoble::soldBook()
{
    numSoldBooks++;
}

int BarnesNoble::get_numSoldBooks()
{
    return numSoldBooks;
}

float BarnesNoble::get_onlineTax()
{
    if (isOnline == true){
        return 500.0;
    }
    else return 0.0;
}