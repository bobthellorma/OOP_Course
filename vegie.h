#ifndef _VEGIE_H
#define _VEGIE_H
#include <string>
#include "animal.h"
using namespace std;

class vegie : public animal{ // inherits publicly from animal

    protected:
    static int nextID; // static ID
    string favourite_food; // the vegie's favourite food, initialise to "grass"

    public:
    vegie(string n, int v); // create a vegie with name n and body volume v
    void set_favourite_food(string f); // set favourite food
    string get_favourite_food(); // get favourite food
    string get_name(); // get name
};


#endif