#include "orchestra.h"
#include "musician.h"
#include <string>

    // default constructor
    Orchestra::Orchestra(){
        musician_list = {};
    }

    Orchestra::Orchestra(int size){
        for (int i = 0; i < size; i++){
            
        }

    }   // constructor for an orchestra of given size
    int get_current_number_of_members(); // finds no. of musicians in the orchestra
    bool has_instrument(std::string instrument); // is there a musician playing this instrument?
    Musician *get_members();        // returns the array of members of the orchestra
    bool add_musician(Musician new_musician); // add musician
    bool add_musician(Musician new_musician); // add musician to orchestra
    ~Orchestra(); // default destructor