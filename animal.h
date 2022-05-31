#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <string>
using namespace std;

class animal{
    static int count; // number of animals in the zoo
    public:
    animal(); // default constructor
    animal(string n, int v);  // creates an animal with name n and body volume v.
    void set_name(string animalName); // update name
    void set_volume(int animalVolume); // update volume
    virtual string get_name() = 0; // purely virtual
    int get_ID(); // get ID
    int get_volume(); // get volume

    protected:
    string name ;              // the animal's name
    int animalID ;             // the animal's unique ID
    int volume ;               // the volume of the animal's body
};

#endif