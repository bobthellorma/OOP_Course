#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include <string>
#include "musician.h"

class Orchestra{
    public:
    Orchestra();           // default constructor
    Orchestra(int size);   // constructor for an orchestra of given size
    int get_current_number_of_members(); // finds no. of musicians in the orchestra
    bool has_instrument(std::string instrument); // is there a musician playing this instrument?
    Musician *get_members();        // returns the array of members of the orchestra
    bool add_musician(Musician new_musician); // add musician
    bool add_musician(Musician new_musician); // add musician to orchestra
    ~Orchestra(); // default destructor

    private:
    musician musician_list[4] = {};
};

#endif