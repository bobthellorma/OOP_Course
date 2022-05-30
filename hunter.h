#ifndef "_HUNTER_H"
#define "_HUNTER_H"
#include <string>

class Hunter{
    public:
    hunter(string n, int v);  // create a hunter with name n and body volume v
    string get_name();
    int get_kills();
    set_kills(int k);
    

    private:
    int animalID;
    string name; // hunter's name
    int volume; // hunter's body volume
    int kills; // how many kills have been recorded, initialised to 0
    static int nextID; // next ID to assign to the hunter

};


#endif