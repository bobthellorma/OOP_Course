#ifndef BARNES_NOBLE_H
#define BARNES_NOBLE_H
#include "BookStore.h"

class BarnesNoble : public BookStore{

    public:
    BarnesNoble(); 
    BarnesNoble(string n);
    void soldBook();
    int get_numSoldBooks();
    float get_onlineTax();

    private:
    int numSoldBooks = 0;
    bool isOnline;


};


#endif