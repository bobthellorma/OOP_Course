#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>

class musician{

private:
    int musicianExperience;
    std::string musicianInstrument;

public:
    musician();
    musician(std::string instrument, int experience); // constructor
    int getExperience();
    std::string getInstrument();



};

#endif

