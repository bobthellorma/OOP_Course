#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <string>
using namespace std;

class animal{

    public:
    static int count;
    animal (string n, int v); // constructor
    void set_name(string animalName); // update name
    void set_volume(int animalVolume); // update volume
    string get_name(); // make this virtual later
    int get_ID(); // get ID
    int get_volume(); // get volume

    protected:
    string name;
    int animalID;
    int volume;

};

#endif