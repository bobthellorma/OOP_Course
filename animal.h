#ifndef "_ANIMAL_H"
#define "_ANIMAL_H"
#include <string>
using namespace std;

class Animal{
    static int count; // number of animals in the zoo
    public:
    animal(string n, int v);  // creates an animal with name n and body volume v.
    set_name(string animalName); // update name
    set_volume(int animalVolume); // update volume
    string get_name() = 0; // get name, purely virtual
    int get_ID(); // get ID
    int get_volume(); // get volume

    protected:
    string name ;              // the animal's name
    int animalID ;             // the animal's unique ID
    int volume ;               // the volume of the animal's body
};

#endif