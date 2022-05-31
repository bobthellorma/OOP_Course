#include "zoo.h"
#include <string>
using namespace std;

zoo::zoo(string n, int cows, int lions)
{
    // the zoo class needs to create an array of cows and lions 

    // create array
    animals = new animal*[cows+lions];


    for (int i = 0; i < cows; i++)
    {
        // create cow objects
        animals[i] = new vegie("Daisy",100);

    }

    for (int i = cows; i < lions+cows; i++)
    {
        // create lion objects
        animals[i] = new hunter("Clarence",50);
    }

    name = n; // assign name
    number_of_animals = cows + lions;
}

