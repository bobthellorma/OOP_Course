#include "musician.h"
#include <iostream>
#include <string>

int main(){
  musician Eric = musician("saxophone",35);
  musician Dylan = musician();
  int a = Eric.getExperience();
  std::string b = Dylan.getInstrument();
  std::cout << "Eric is " << a << b << std::endl;
}
