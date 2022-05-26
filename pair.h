#ifndef _PAIR_H_
#define _PAIR_H_
#include <iostream>

template<class T1, class T2>

class Pair{

    private:
    T1 _first;
    T2 _second;

    public:
    Pair(int first, int second):
    _first(first), _second(second){}

};

#endif