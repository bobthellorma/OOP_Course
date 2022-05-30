#ifndef "_VEGIE_H"
#define "_VEGIE_H"
#include <string>
using namespace std;

class Vegie: public animal{ // inherits publicly from animal

    private:
    static int nextID; // static ID
    string favourite_food; // the vegie's favourite food, initialise to "grass"

    public:
    vegie(string n, int v); // create a vegie with name n and body volume v
    set_fav(string f); // set favourite food
    string get_fav(); // get favourite food
    string get_name(); // get name
};


#endif