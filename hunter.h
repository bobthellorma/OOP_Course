#ifndef _HUNTER_H
#define _HUNTER_H
#include <string>
#include "animal.h"
using namespace std;

class hunter : public animal{
    public:
    hunter(string n, int v);  // create a hunter with name n and body volume v
    string get_name();
    int get_kills();
    void set_kills(int k);
    

    protected:
    string name; // hunter's name
    int volume; // hunter's body volume
    int kills; // how many kills have been recorded, initialised to 0
    static int nextID;

};


#endif