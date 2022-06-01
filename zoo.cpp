#include "zoo.h"
#include <string>
#include <iostream>
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
        cout << animals[i]->get_ID() << endl;
        cout << animals[i]->get_name() << endl;
    }

    for (int i = cows; i < lions+cows; i++)
    {
        // create lion objects
        animals[i] = new hunter("Clarence",50);
        cout << animals[i]->get_ID() << endl;
        cout << animals[i]->get_name() << endl;
    }

    name = n; // assign name
    number_of_animals = cows + lions;
}

string zoo::get_name() // return the name of zoo
{
    return name;
}

int zoo::get_number_of_animals() // return number of animals in the zoo
{
    return number_of_animals;
}
   
animal** zoo::get_animals() // return array of animals  
{
    return animals;
}