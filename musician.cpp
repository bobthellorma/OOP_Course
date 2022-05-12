#include "musician.h"
#include <iostream>

// Constructor
musician::musician(std::string instrument, int experience){ 
musicianExperience = experience;
musicianInstrument = instrument;
}

musician::musician(){
  musicianExperience = 0;
  musicianInstrument = "null";
}

// Functions
std::string musician::getInstrument(){
return musicianInstrument;
}

int musician::getExperience(){
    return musicianExperience;
}
