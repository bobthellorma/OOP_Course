
// for testing setup
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include "zoo.h"


// for testing new animal
//#include "newAnimal.h"

using namespace std;
#include <iostream>

int main()
{
    // assign protected static 
    //animal first = animal
    // create newAnimal
    //animal p = animal("Travis",31);
    //cout << p.get_ID();
    //cout << p->get_name();
    //cout << p->set_volume(26);
    //cout << p->get_volume();
    
    
    // create zoo
    zoo H = zoo("Pringles",2,3); // we get the messages
    /*
    Test to access animal array - works
    animal** animal_array = H.get_animals();
    cout << animal_array[3]->get_name() << endl;
    */

    // create hunter
    hunter A = hunter("Narm",46);
    cout << A.get_ID() << endl;
    cout << A.get_name() << endl;
    vegie B = vegie("Took", 45);
    cout << B.get_ID() << endl;
    cout << B.get_name() << endl;

    // find data on animals in the zoo
    //cout << H.animals[3]->get_name() << endl;
}


